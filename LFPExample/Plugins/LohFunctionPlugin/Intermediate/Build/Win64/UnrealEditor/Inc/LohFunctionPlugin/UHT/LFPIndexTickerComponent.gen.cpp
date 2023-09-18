// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPlugin/Public/Components/LFPIndexTickerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFPIndexTickerComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPIndexTickerComponent();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPIndexTickerComponent_NoRegister();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPTickerObject_NoRegister();
	LOHFUNCTIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPIndexTickData();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPIndexTickGroupData();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPIndexTickData;
class UScriptStruct* FLFPIndexTickData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPIndexTickData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPIndexTickData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPIndexTickData, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPIndexTickData"));
	}
	return Z_Registration_Info_UScriptStruct_LFPIndexTickData.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPIndexTickData>()
{
	return FLFPIndexTickData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPIndexTickData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ticker_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ticker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Delay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPIndexTickData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::NewProp_Ticker_MetaData[] = {
		{ "Category", "LFPIndexTickData" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::NewProp_Ticker = { "Ticker", nullptr, (EPropertyFlags)0x0014000001000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPIndexTickData, Ticker), Z_Construct_UClass_UClass, Z_Construct_UClass_ULFPTickerObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::NewProp_Ticker_MetaData), Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::NewProp_Ticker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "LFPIndexTickData" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPIndexTickData, Delay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::NewProp_Delay_MetaData), Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::NewProp_Delay_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::NewProp_Ticker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::NewProp_Delay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPIndexTickData",
		Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::PropPointers),
		sizeof(FLFPIndexTickData),
		alignof(FLFPIndexTickData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPIndexTickData()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPIndexTickData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPIndexTickData.InnerSingleton, Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPIndexTickData.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics
	{
		struct _Script_LohFunctionPlugin_eventLFPOnIndex_Parms
		{
			int32 TickIndex;
			FIntPoint GroupIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TickIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::NewProp_TickIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::NewProp_TickIndex = { "TickIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventLFPOnIndex_Parms, TickIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::NewProp_TickIndex_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::NewProp_TickIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventLFPOnIndex_Parms, GroupIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::NewProp_GroupIndex_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::NewProp_GroupIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::NewProp_TickIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::NewProp_GroupIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPlugin, nullptr, "LFPOnIndex__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::_Script_LohFunctionPlugin_eventLFPOnIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::_Script_LohFunctionPlugin_eventLFPOnIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLFPOnIndex_DelegateWrapper(const FMulticastScriptDelegate& LFPOnIndex, const int32 TickIndex, const FIntPoint GroupIndex)
{
	struct _Script_LohFunctionPlugin_eventLFPOnIndex_Parms
	{
		int32 TickIndex;
		FIntPoint GroupIndex;
	};
	_Script_LohFunctionPlugin_eventLFPOnIndex_Parms Parms;
	Parms.TickIndex=TickIndex;
	Parms.GroupIndex=GroupIndex;
	LFPOnIndex.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPIndexTickGroupData;
class UScriptStruct* FLFPIndexTickGroupData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPIndexTickGroupData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPIndexTickGroupData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPIndexTickGroupData, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPIndexTickGroupData"));
	}
	return Z_Registration_Info_UScriptStruct_LFPIndexTickGroupData.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPIndexTickGroupData>()
{
	return FLFPIndexTickGroupData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomTickIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomTickIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScheduledTickList_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScheduledTickList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScheduledTickList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ScheduledTickList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPIndexTickGroupData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::NewProp_RandomTickIndex_MetaData[] = {
		{ "Category", "LFPIndexTickGroupData" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::NewProp_RandomTickIndex = { "RandomTickIndex", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPIndexTickGroupData, RandomTickIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::NewProp_RandomTickIndex_MetaData), Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::NewProp_RandomTickIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::NewProp_ScheduledTickList_ValueProp = { "ScheduledTickList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLFPIndexTickData, METADATA_PARAMS(0, nullptr) }; // 2857805502
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::NewProp_ScheduledTickList_Key_KeyProp = { "ScheduledTickList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::NewProp_ScheduledTickList_MetaData[] = {
		{ "Category", "LFPIndexTickGroupData" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::NewProp_ScheduledTickList = { "ScheduledTickList", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPIndexTickGroupData, ScheduledTickList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::NewProp_ScheduledTickList_MetaData), Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::NewProp_ScheduledTickList_MetaData) }; // 2857805502
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::NewProp_RandomTickIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::NewProp_ScheduledTickList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::NewProp_ScheduledTickList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::NewProp_ScheduledTickList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPIndexTickGroupData",
		Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::PropPointers),
		sizeof(FLFPIndexTickGroupData),
		alignof(FLFPIndexTickGroupData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPIndexTickGroupData()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPIndexTickGroupData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPIndexTickGroupData.InnerSingleton, Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPIndexTickGroupData.InnerSingleton;
	}
	DEFINE_FUNCTION(ULFPIndexTickerComponent::execGetRandomTicker)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_GroupIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TickIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULFPTickerObject**)Z_Param__Result=P_THIS->GetRandomTicker(Z_Param_GroupIndex,Z_Param_TickIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPIndexTickerComponent::execGetCacheRandomTickIndex)
	{
		P_GET_STRUCT_REF(FLFPIndexTickGroupData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCacheRandomTickIndex(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPIndexTickerComponent::execSaveGroupList)
	{
		P_GET_TMAP_REF(FIntPoint,FLFPIndexTickGroupData,Z_Param_Out_SaveVariable);
		P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_GroupIndexList);
		P_GET_UBOOL(Z_Param_bUnload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGroupList(Z_Param_Out_SaveVariable,Z_Param_Out_GroupIndexList,Z_Param_bUnload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPIndexTickerComponent::execLoadGroupList)
	{
		P_GET_TMAP_REF(FIntPoint,FLFPIndexTickGroupData,Z_Param_Out_SaveVariable);
		P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_GroupIndexList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGroupList(Z_Param_Out_SaveVariable,Z_Param_Out_GroupIndexList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPIndexTickerComponent::execScheduledTickIndex)
	{
		P_GET_STRUCT_REF(FLFPIndexTickData,Z_Param_Out_TickData);
		P_GET_PROPERTY(FIntProperty,Z_Param_TickIndex);
		P_GET_STRUCT(FIntPoint,Z_Param_GroupIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScheduledTickIndex(Z_Param_Out_TickData,Z_Param_TickIndex,Z_Param_GroupIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPIndexTickerComponent::execAddTickGroup)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_GroupIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTickGroup(Z_Param_GroupIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPIndexTickerComponent::execCallTick)
	{
		P_GET_UBOOL(Z_Param_bRandomTick);
		P_GET_UBOOL(Z_Param_bScheduledTick);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallTick(Z_Param_bRandomTick,Z_Param_bScheduledTick);
		P_NATIVE_END;
	}
	void ULFPIndexTickerComponent::StaticRegisterNativesULFPIndexTickerComponent()
	{
		UClass* Class = ULFPIndexTickerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTickGroup", &ULFPIndexTickerComponent::execAddTickGroup },
			{ "CallTick", &ULFPIndexTickerComponent::execCallTick },
			{ "GetCacheRandomTickIndex", &ULFPIndexTickerComponent::execGetCacheRandomTickIndex },
			{ "GetRandomTicker", &ULFPIndexTickerComponent::execGetRandomTicker },
			{ "LoadGroupList", &ULFPIndexTickerComponent::execLoadGroupList },
			{ "SaveGroupList", &ULFPIndexTickerComponent::execSaveGroupList },
			{ "ScheduledTickIndex", &ULFPIndexTickerComponent::execScheduledTickIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics
	{
		struct LFPIndexTickerComponent_eventAddTickGroup_Parms
		{
			FIntPoint GroupIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPIndexTickerComponent_eventAddTickGroup_Parms, GroupIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics::NewProp_GroupIndex_MetaData), Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics::NewProp_GroupIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics::NewProp_GroupIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPIndexTickerComponent | Function" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPIndexTickerComponent, nullptr, "AddTickGroup", nullptr, nullptr, Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics::LFPIndexTickerComponent_eventAddTickGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics::LFPIndexTickerComponent_eventAddTickGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics
	{
		struct LFPIndexTickerComponent_eventCallTick_Parms
		{
			bool bRandomTick;
			bool bScheduledTick;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomTick_MetaData[];
#endif
		static void NewProp_bRandomTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScheduledTick_MetaData[];
#endif
		static void NewProp_bScheduledTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScheduledTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::NewProp_bRandomTick_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::NewProp_bRandomTick_SetBit(void* Obj)
	{
		((LFPIndexTickerComponent_eventCallTick_Parms*)Obj)->bRandomTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::NewProp_bRandomTick = { "bRandomTick", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPIndexTickerComponent_eventCallTick_Parms), &Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::NewProp_bRandomTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::NewProp_bRandomTick_MetaData), Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::NewProp_bRandomTick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::NewProp_bScheduledTick_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::NewProp_bScheduledTick_SetBit(void* Obj)
	{
		((LFPIndexTickerComponent_eventCallTick_Parms*)Obj)->bScheduledTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::NewProp_bScheduledTick = { "bScheduledTick", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPIndexTickerComponent_eventCallTick_Parms), &Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::NewProp_bScheduledTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::NewProp_bScheduledTick_MetaData), Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::NewProp_bScheduledTick_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::NewProp_bRandomTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::NewProp_bScheduledTick,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPIndexTickerComponent | Function" },
		{ "CPP_Default_bRandomTick", "true" },
		{ "CPP_Default_bScheduledTick", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPIndexTickerComponent, nullptr, "CallTick", nullptr, nullptr, Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::LFPIndexTickerComponent_eventCallTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::LFPIndexTickerComponent_eventCallTick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex_Statics
	{
		struct LFPIndexTickerComponent_eventGetCacheRandomTickIndex_Parms
		{
			FLFPIndexTickGroupData Data;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPIndexTickerComponent_eventGetCacheRandomTickIndex_Parms, Data), Z_Construct_UScriptStruct_FLFPIndexTickGroupData, METADATA_PARAMS(0, nullptr) }; // 3756566290
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPIndexTickerComponent_eventGetCacheRandomTickIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPIndexTickerComponent, nullptr, "GetCacheRandomTickIndex", nullptr, nullptr, Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex_Statics::LFPIndexTickerComponent_eventGetCacheRandomTickIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex_Statics::LFPIndexTickerComponent_eventGetCacheRandomTickIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics
	{
		struct LFPIndexTickerComponent_eventGetRandomTicker_Parms
		{
			FIntPoint GroupIndex;
			int32 TickIndex;
			ULFPTickerObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TickIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPIndexTickerComponent_eventGetRandomTicker_Parms, GroupIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::NewProp_GroupIndex_MetaData), Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::NewProp_GroupIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::NewProp_TickIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::NewProp_TickIndex = { "TickIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPIndexTickerComponent_eventGetRandomTicker_Parms, TickIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::NewProp_TickIndex_MetaData), Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::NewProp_TickIndex_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPIndexTickerComponent_eventGetRandomTicker_Parms, ReturnValue), Z_Construct_UClass_ULFPTickerObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::NewProp_GroupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::NewProp_TickIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPIndexTickerComponent, nullptr, "GetRandomTicker", nullptr, nullptr, Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::LFPIndexTickerComponent_eventGetRandomTicker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::LFPIndexTickerComponent_eventGetRandomTicker_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics
	{
		struct LFPIndexTickerComponent_eventLoadGroupList_Parms
		{
			TMap<FIntPoint,FLFPIndexTickGroupData> SaveVariable;
			TArray<FIntPoint> GroupIndexList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveVariable_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveVariable_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveVariable_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SaveVariable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupIndexList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndexList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupIndexList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::NewProp_SaveVariable_ValueProp = { "SaveVariable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLFPIndexTickGroupData, METADATA_PARAMS(0, nullptr) }; // 3756566290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::NewProp_SaveVariable_Key_KeyProp = { "SaveVariable_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::NewProp_SaveVariable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::NewProp_SaveVariable = { "SaveVariable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPIndexTickerComponent_eventLoadGroupList_Parms, SaveVariable), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::NewProp_SaveVariable_MetaData), Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::NewProp_SaveVariable_MetaData) }; // 3756566290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::NewProp_GroupIndexList_Inner = { "GroupIndexList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::NewProp_GroupIndexList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::NewProp_GroupIndexList = { "GroupIndexList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPIndexTickerComponent_eventLoadGroupList_Parms, GroupIndexList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::NewProp_GroupIndexList_MetaData), Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::NewProp_GroupIndexList_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::NewProp_SaveVariable_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::NewProp_SaveVariable_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::NewProp_SaveVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::NewProp_GroupIndexList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::NewProp_GroupIndexList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPIndexTickerComponent | Group" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPIndexTickerComponent, nullptr, "LoadGroupList", nullptr, nullptr, Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::LFPIndexTickerComponent_eventLoadGroupList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::LFPIndexTickerComponent_eventLoadGroupList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics
	{
		struct LFPIndexTickerComponent_eventSaveGroupList_Parms
		{
			TMap<FIntPoint,FLFPIndexTickGroupData> SaveVariable;
			TArray<FIntPoint> GroupIndexList;
			bool bUnload;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveVariable_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveVariable_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_SaveVariable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupIndexList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndexList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupIndexList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUnload_MetaData[];
#endif
		static void NewProp_bUnload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_SaveVariable_ValueProp = { "SaveVariable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLFPIndexTickGroupData, METADATA_PARAMS(0, nullptr) }; // 3756566290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_SaveVariable_Key_KeyProp = { "SaveVariable_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_SaveVariable = { "SaveVariable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPIndexTickerComponent_eventSaveGroupList_Parms, SaveVariable), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3756566290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_GroupIndexList_Inner = { "GroupIndexList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_GroupIndexList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_GroupIndexList = { "GroupIndexList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPIndexTickerComponent_eventSaveGroupList_Parms, GroupIndexList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_GroupIndexList_MetaData), Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_GroupIndexList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_bUnload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_bUnload_SetBit(void* Obj)
	{
		((LFPIndexTickerComponent_eventSaveGroupList_Parms*)Obj)->bUnload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_bUnload = { "bUnload", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPIndexTickerComponent_eventSaveGroupList_Parms), &Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_bUnload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_bUnload_MetaData), Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_bUnload_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_SaveVariable_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_SaveVariable_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_SaveVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_GroupIndexList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_GroupIndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::NewProp_bUnload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPIndexTickerComponent | Group" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPIndexTickerComponent, nullptr, "SaveGroupList", nullptr, nullptr, Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::LFPIndexTickerComponent_eventSaveGroupList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::LFPIndexTickerComponent_eventSaveGroupList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics
	{
		struct LFPIndexTickerComponent_eventScheduledTickIndex_Parms
		{
			FLFPIndexTickData TickData;
			int32 TickIndex;
			FIntPoint GroupIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TickData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TickIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::NewProp_TickData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::NewProp_TickData = { "TickData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPIndexTickerComponent_eventScheduledTickIndex_Parms, TickData), Z_Construct_UScriptStruct_FLFPIndexTickData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::NewProp_TickData_MetaData), Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::NewProp_TickData_MetaData) }; // 2857805502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::NewProp_TickIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::NewProp_TickIndex = { "TickIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPIndexTickerComponent_eventScheduledTickIndex_Parms, TickIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::NewProp_TickIndex_MetaData), Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::NewProp_TickIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPIndexTickerComponent_eventScheduledTickIndex_Parms, GroupIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::NewProp_GroupIndex_MetaData), Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::NewProp_GroupIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::NewProp_TickData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::NewProp_TickIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::NewProp_GroupIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPIndexTickerComponent | Function" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPIndexTickerComponent, nullptr, "ScheduledTickIndex", nullptr, nullptr, Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::LFPIndexTickerComponent_eventScheduledTickIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::LFPIndexTickerComponent_eventScheduledTickIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULFPIndexTickerComponent);
	UClass* Z_Construct_UClass_ULFPIndexTickerComponent_NoRegister()
	{
		return ULFPIndexTickerComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULFPIndexTickerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRandomTick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRandomTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScheduledTick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScheduledTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScheduledRemove_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScheduledRemove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScheduledAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScheduledAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowAutoRandomTick_MetaData[];
#endif
		static void NewProp_bAllowAutoRandomTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowAutoRandomTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowAutoScheduledTick_MetaData[];
#endif
		static void NewProp_bAllowAutoScheduledTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowAutoScheduledTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomTickCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomTickCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomTickSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomTickSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomTickMaxIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomTickMaxIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CacheRandomTickList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheRandomTickList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CacheRandomTickList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TickList_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TickList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TickList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFPIndexTickerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPIndexTickerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFPIndexTickerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFPIndexTickerComponent_AddTickGroup, "AddTickGroup" }, // 597059601
		{ &Z_Construct_UFunction_ULFPIndexTickerComponent_CallTick, "CallTick" }, // 1851501795
		{ &Z_Construct_UFunction_ULFPIndexTickerComponent_GetCacheRandomTickIndex, "GetCacheRandomTickIndex" }, // 2216697824
		{ &Z_Construct_UFunction_ULFPIndexTickerComponent_GetRandomTicker, "GetRandomTicker" }, // 4004407987
		{ &Z_Construct_UFunction_ULFPIndexTickerComponent_LoadGroupList, "LoadGroupList" }, // 3367921489
		{ &Z_Construct_UFunction_ULFPIndexTickerComponent_SaveGroupList, "SaveGroupList" }, // 3730010258
		{ &Z_Construct_UFunction_ULFPIndexTickerComponent_ScheduledTickIndex, "ScheduledTickIndex" }, // 978145837
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPIndexTickerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPIndexTickerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LFPlugin" },
		{ "IncludePath", "Components/LFPIndexTickerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnRandomTick_MetaData[] = {
		{ "Category", "LFPIndexTickerComponent | Delegate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnRandomTick = { "OnRandomTick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPIndexTickerComponent, OnRandomTick), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnRandomTick_MetaData), Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnRandomTick_MetaData) }; // 3718806152
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnScheduledTick_MetaData[] = {
		{ "Category", "LFPIndexTickerComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnScheduledTick = { "OnScheduledTick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPIndexTickerComponent, OnScheduledTick), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnScheduledTick_MetaData), Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnScheduledTick_MetaData) }; // 3718806152
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnScheduledRemove_MetaData[] = {
		{ "Category", "LFPIndexTickerComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnScheduledRemove = { "OnScheduledRemove", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPIndexTickerComponent, OnScheduledRemove), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnScheduledRemove_MetaData), Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnScheduledRemove_MetaData) }; // 3718806152
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnScheduledAdded_MetaData[] = {
		{ "Category", "LFPIndexTickerComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnScheduledAdded = { "OnScheduledAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPIndexTickerComponent, OnScheduledAdded), Z_Construct_UDelegateFunction_LohFunctionPlugin_LFPOnIndex__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnScheduledAdded_MetaData), Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnScheduledAdded_MetaData) }; // 3718806152
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_bAllowAutoRandomTick_MetaData[] = {
		{ "Category", "LFPIndexTickerComponent" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_bAllowAutoRandomTick_SetBit(void* Obj)
	{
		((ULFPIndexTickerComponent*)Obj)->bAllowAutoRandomTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_bAllowAutoRandomTick = { "bAllowAutoRandomTick", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULFPIndexTickerComponent), &Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_bAllowAutoRandomTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_bAllowAutoRandomTick_MetaData), Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_bAllowAutoRandomTick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_bAllowAutoScheduledTick_MetaData[] = {
		{ "Category", "LFPIndexTickerComponent" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_bAllowAutoScheduledTick_SetBit(void* Obj)
	{
		((ULFPIndexTickerComponent*)Obj)->bAllowAutoScheduledTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_bAllowAutoScheduledTick = { "bAllowAutoScheduledTick", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULFPIndexTickerComponent), &Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_bAllowAutoScheduledTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_bAllowAutoScheduledTick_MetaData), Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_bAllowAutoScheduledTick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_RandomTickCount_MetaData[] = {
		{ "Category", "LFPIndexTickerComponent" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_RandomTickCount = { "RandomTickCount", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPIndexTickerComponent, RandomTickCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_RandomTickCount_MetaData), Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_RandomTickCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_RandomTickSeed_MetaData[] = {
		{ "Category", "LFPIndexTickerComponent" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_RandomTickSeed = { "RandomTickSeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPIndexTickerComponent, RandomTickSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_RandomTickSeed_MetaData), Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_RandomTickSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_RandomTickMaxIndex_MetaData[] = {
		{ "Category", "LFPIndexTickerComponent" },
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_RandomTickMaxIndex = { "RandomTickMaxIndex", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPIndexTickerComponent, RandomTickMaxIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_RandomTickMaxIndex_MetaData), Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_RandomTickMaxIndex_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_CacheRandomTickList_Inner = { "CacheRandomTickList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_CacheRandomTickList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_CacheRandomTickList = { "CacheRandomTickList", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPIndexTickerComponent, CacheRandomTickList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_CacheRandomTickList_MetaData), Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_CacheRandomTickList_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_TickList_ValueProp = { "TickList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLFPIndexTickGroupData, METADATA_PARAMS(0, nullptr) }; // 3756566290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_TickList_Key_KeyProp = { "TickList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_TickList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LFPIndexTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_TickList = { "TickList", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPIndexTickerComponent, TickList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_TickList_MetaData), Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_TickList_MetaData) }; // 3756566290
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFPIndexTickerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnRandomTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnScheduledTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnScheduledRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_OnScheduledAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_bAllowAutoRandomTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_bAllowAutoScheduledTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_RandomTickCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_RandomTickSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_RandomTickMaxIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_CacheRandomTickList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_CacheRandomTickList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_TickList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_TickList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPIndexTickerComponent_Statics::NewProp_TickList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFPIndexTickerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFPIndexTickerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFPIndexTickerComponent_Statics::ClassParams = {
		&ULFPIndexTickerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFPIndexTickerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFPIndexTickerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPIndexTickerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFPIndexTickerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPIndexTickerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULFPIndexTickerComponent()
	{
		if (!Z_Registration_Info_UClass_ULFPIndexTickerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFPIndexTickerComponent.OuterSingleton, Z_Construct_UClass_ULFPIndexTickerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULFPIndexTickerComponent.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<ULFPIndexTickerComponent>()
	{
		return ULFPIndexTickerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFPIndexTickerComponent);
	ULFPIndexTickerComponent::~ULFPIndexTickerComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_Statics::ScriptStructInfo[] = {
		{ FLFPIndexTickData::StaticStruct, Z_Construct_UScriptStruct_FLFPIndexTickData_Statics::NewStructOps, TEXT("LFPIndexTickData"), &Z_Registration_Info_UScriptStruct_LFPIndexTickData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPIndexTickData), 2857805502U) },
		{ FLFPIndexTickGroupData::StaticStruct, Z_Construct_UScriptStruct_FLFPIndexTickGroupData_Statics::NewStructOps, TEXT("LFPIndexTickGroupData"), &Z_Registration_Info_UScriptStruct_LFPIndexTickGroupData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPIndexTickGroupData), 3756566290U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULFPIndexTickerComponent, ULFPIndexTickerComponent::StaticClass, TEXT("ULFPIndexTickerComponent"), &Z_Registration_Info_UClass_ULFPIndexTickerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFPIndexTickerComponent), 466981492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_70456709(TEXT("/Script/LohFunctionPlugin"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPIndexTickerComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
