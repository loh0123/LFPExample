// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPluginItem/Public/Item/LFPInventoryInterface.h"
#include "LohFunctionPluginItem/Public/Item/LFPInventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFPInventoryInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	LOHFUNCTIONPLUGINITEM_API UClass* Z_Construct_UClass_ULFPInventoryInterface();
	LOHFUNCTIONPLUGINITEM_API UClass* Z_Construct_UClass_ULFPInventoryInterface_NoRegister();
	LOHFUNCTIONPLUGINITEM_API UScriptStruct* Z_Construct_UScriptStruct_FLFPInventoryItemData();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPluginItem();
// End Cross Module References
	DEFINE_FUNCTION(ILFPInventoryInterface::execCanInventorySwapItem)
	{
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_FromItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_FromSlot);
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_ToItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_ToSlot);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInventorySwapItem_Implementation(Z_Param_Out_FromItemData,Z_Param_FromSlot,Z_Param_Out_ToItemData,Z_Param_ToSlot,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ILFPInventoryInterface::execCanInventoryRemoveItem)
	{
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_ItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInventoryRemoveItem_Implementation(Z_Param_Out_ItemData,Z_Param_SlotIndex,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ILFPInventoryInterface::execCanInventoryAddItem)
	{
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_ItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInventoryAddItem_Implementation(Z_Param_Out_ItemData,Z_Param_SlotIndex,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	struct LFPInventoryInterface_eventCanInventoryAddItem_Parms
	{
		FLFPInventoryItemData ItemData;
		int32 SlotIndex;
		FString EventInfo;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPInventoryInterface_eventCanInventoryAddItem_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPInventoryInterface_eventCanInventoryRemoveItem_Parms
	{
		FLFPInventoryItemData ItemData;
		int32 SlotIndex;
		FString EventInfo;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPInventoryInterface_eventCanInventoryRemoveItem_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPInventoryInterface_eventCanInventorySwapItem_Parms
	{
		FLFPInventoryItemData FromItemData;
		int32 FromSlot;
		FLFPInventoryItemData ToItemData;
		int32 ToSlot;
		FString EventInfo;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPInventoryInterface_eventCanInventorySwapItem_Parms()
			: ReturnValue(false)
		{
		}
	};
	bool ILFPInventoryInterface::CanInventoryAddItem(FLFPInventoryItemData const& ItemData, const int32 SlotIndex, const FString& EventInfo) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanInventoryAddItem instead.");
		LFPInventoryInterface_eventCanInventoryAddItem_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ILFPInventoryInterface::CanInventoryRemoveItem(FLFPInventoryItemData const& ItemData, const int32 SlotIndex, const FString& EventInfo) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanInventoryRemoveItem instead.");
		LFPInventoryInterface_eventCanInventoryRemoveItem_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ILFPInventoryInterface::CanInventorySwapItem(FLFPInventoryItemData const& FromItemData, const int32 FromSlot, FLFPInventoryItemData const& ToItemData, const int32 ToSlot, const FString& EventInfo) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanInventorySwapItem instead.");
		LFPInventoryInterface_eventCanInventorySwapItem_Parms Parms;
		return Parms.ReturnValue;
	}
	void ULFPInventoryInterface::StaticRegisterNativesULFPInventoryInterface()
	{
		UClass* Class = ULFPInventoryInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInventoryAddItem", &ILFPInventoryInterface::execCanInventoryAddItem },
			{ "CanInventoryRemoveItem", &ILFPInventoryInterface::execCanInventoryRemoveItem },
			{ "CanInventorySwapItem", &ILFPInventoryInterface::execCanInventorySwapItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryInterface_eventCanInventoryAddItem_Parms, ItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_ItemData_MetaData), Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_ItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryInterface_eventCanInventoryAddItem_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_SlotIndex_MetaData), Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_SlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryInterface_eventCanInventoryAddItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryInterface_eventCanInventoryAddItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryInterface_eventCanInventoryAddItem_Parms), &Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryInterface" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryInterface, nullptr, "CanInventoryAddItem", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::PropPointers), sizeof(LFPInventoryInterface_eventCanInventoryAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPInventoryInterface_eventCanInventoryAddItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryInterface_eventCanInventoryRemoveItem_Parms, ItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_ItemData_MetaData), Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_ItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryInterface_eventCanInventoryRemoveItem_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_SlotIndex_MetaData), Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_SlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryInterface_eventCanInventoryRemoveItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryInterface_eventCanInventoryRemoveItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryInterface_eventCanInventoryRemoveItem_Parms), &Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryInterface" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryInterface, nullptr, "CanInventoryRemoveItem", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::PropPointers), sizeof(LFPInventoryInterface_eventCanInventoryRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPInventoryInterface_eventCanInventoryRemoveItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_FromItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_FromItemData = { "FromItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryInterface_eventCanInventorySwapItem_Parms, FromItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_FromItemData_MetaData), Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_FromItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_FromSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_FromSlot = { "FromSlot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryInterface_eventCanInventorySwapItem_Parms, FromSlot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_FromSlot_MetaData), Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_FromSlot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_ToItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_ToItemData = { "ToItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryInterface_eventCanInventorySwapItem_Parms, ToItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_ToItemData_MetaData), Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_ToItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_ToSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_ToSlot = { "ToSlot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryInterface_eventCanInventorySwapItem_Parms, ToSlot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_ToSlot_MetaData), Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_ToSlot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryInterface_eventCanInventorySwapItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryInterface_eventCanInventorySwapItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryInterface_eventCanInventorySwapItem_Parms), &Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_FromItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_FromSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_ToItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_ToSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryInterface" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryInterface, nullptr, "CanInventorySwapItem", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::PropPointers), sizeof(LFPInventoryInterface_eventCanInventorySwapItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPInventoryInterface_eventCanInventorySwapItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULFPInventoryInterface);
	UClass* Z_Construct_UClass_ULFPInventoryInterface_NoRegister()
	{
		return ULFPInventoryInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULFPInventoryInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFPInventoryInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginItem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFPInventoryInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryAddItem, "CanInventoryAddItem" }, // 1691242972
		{ &Z_Construct_UFunction_ULFPInventoryInterface_CanInventoryRemoveItem, "CanInventoryRemoveItem" }, // 4023488355
		{ &Z_Construct_UFunction_ULFPInventoryInterface_CanInventorySwapItem, "CanInventorySwapItem" }, // 3776140425
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPInventoryInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/LFPInventoryInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFPInventoryInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILFPInventoryInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFPInventoryInterface_Statics::ClassParams = {
		&ULFPInventoryInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFPInventoryInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULFPInventoryInterface()
	{
		if (!Z_Registration_Info_UClass_ULFPInventoryInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFPInventoryInterface.OuterSingleton, Z_Construct_UClass_ULFPInventoryInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULFPInventoryInterface.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGINITEM_API UClass* StaticClass<ULFPInventoryInterface>()
	{
		return ULFPInventoryInterface::StaticClass();
	}
	ULFPInventoryInterface::ULFPInventoryInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFPInventoryInterface);
	ULFPInventoryInterface::~ULFPInventoryInterface() {}
	static FName NAME_ULFPInventoryInterface_CanInventoryAddItem = FName(TEXT("CanInventoryAddItem"));
	bool ILFPInventoryInterface::Execute_CanInventoryAddItem(const UObject* O, FLFPInventoryItemData const& ItemData, const int32 SlotIndex, const FString& EventInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULFPInventoryInterface::StaticClass()));
		LFPInventoryInterface_eventCanInventoryAddItem_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULFPInventoryInterface_CanInventoryAddItem);
		if (Func)
		{
			Parms.ItemData=ItemData;
			Parms.SlotIndex=SlotIndex;
			Parms.EventInfo=EventInfo;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ILFPInventoryInterface*)(O->GetNativeInterfaceAddress(ULFPInventoryInterface::StaticClass())))
		{
			Parms.ReturnValue = I->CanInventoryAddItem_Implementation(ItemData,SlotIndex,EventInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_ULFPInventoryInterface_CanInventoryRemoveItem = FName(TEXT("CanInventoryRemoveItem"));
	bool ILFPInventoryInterface::Execute_CanInventoryRemoveItem(const UObject* O, FLFPInventoryItemData const& ItemData, const int32 SlotIndex, const FString& EventInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULFPInventoryInterface::StaticClass()));
		LFPInventoryInterface_eventCanInventoryRemoveItem_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULFPInventoryInterface_CanInventoryRemoveItem);
		if (Func)
		{
			Parms.ItemData=ItemData;
			Parms.SlotIndex=SlotIndex;
			Parms.EventInfo=EventInfo;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ILFPInventoryInterface*)(O->GetNativeInterfaceAddress(ULFPInventoryInterface::StaticClass())))
		{
			Parms.ReturnValue = I->CanInventoryRemoveItem_Implementation(ItemData,SlotIndex,EventInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_ULFPInventoryInterface_CanInventorySwapItem = FName(TEXT("CanInventorySwapItem"));
	bool ILFPInventoryInterface::Execute_CanInventorySwapItem(const UObject* O, FLFPInventoryItemData const& FromItemData, const int32 FromSlot, FLFPInventoryItemData const& ToItemData, const int32 ToSlot, const FString& EventInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULFPInventoryInterface::StaticClass()));
		LFPInventoryInterface_eventCanInventorySwapItem_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULFPInventoryInterface_CanInventorySwapItem);
		if (Func)
		{
			Parms.FromItemData=FromItemData;
			Parms.FromSlot=FromSlot;
			Parms.ToItemData=ToItemData;
			Parms.ToSlot=ToSlot;
			Parms.EventInfo=EventInfo;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ILFPInventoryInterface*)(O->GetNativeInterfaceAddress(ULFPInventoryInterface::StaticClass())))
		{
			Parms.ReturnValue = I->CanInventorySwapItem_Implementation(FromItemData,FromSlot,ToItemData,ToSlot,EventInfo);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULFPInventoryInterface, ULFPInventoryInterface::StaticClass, TEXT("ULFPInventoryInterface"), &Z_Registration_Info_UClass_ULFPInventoryInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFPInventoryInterface), 447292040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_3719208096(TEXT("/Script/LohFunctionPluginItem"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
