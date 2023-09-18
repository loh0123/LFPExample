// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPlugin/Public/Components/LFPGridTickerComponent.h"
#include "LohFunctionPlugin/Public/Components/LFPGridContainerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFPGridTickerComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPGridContainerComponent_NoRegister();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPGridTickerComponent();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPGridTickerComponent_NoRegister();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPIndexTickerComponent();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPTickerObject_NoRegister();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPGridTickerTable();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPGridUpdateAction();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPlugin();
// End Cross Module References

static_assert(std::is_polymorphic<FLFPGridTickerTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLFPGridTickerTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPGridTickerTable;
class UScriptStruct* FLFPGridTickerTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPGridTickerTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPGridTickerTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPGridTickerTable, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPGridTickerTable"));
	}
	return Z_Registration_Info_UScriptStruct_LFPGridTickerTable.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPGridTickerTable>()
{
	return FLFPGridTickerTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRandomOnly_MetaData[];
#endif
		static void NewProp_bIsRandomOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRandomOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomTicker_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RandomTicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScheduleTicker_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ScheduleTicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickDelay_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TickDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickRandomOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TickRandomOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPGridTickerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPGridTickerTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_bIsRandomOnly_MetaData[] = {
		{ "Category", "LFPGridTickerTable" },
		{ "ModuleRelativePath", "Public/Components/LFPGridTickerComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_bIsRandomOnly_SetBit(void* Obj)
	{
		((FLFPGridTickerTable*)Obj)->bIsRandomOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_bIsRandomOnly = { "bIsRandomOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLFPGridTickerTable), &Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_bIsRandomOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_bIsRandomOnly_MetaData), Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_bIsRandomOnly_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_RandomTicker_MetaData[] = {
		{ "Category", "LFPGridTickerTable" },
		{ "ModuleRelativePath", "Public/Components/LFPGridTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_RandomTicker = { "RandomTicker", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridTickerTable, RandomTicker), Z_Construct_UClass_UClass, Z_Construct_UClass_ULFPTickerObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_RandomTicker_MetaData), Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_RandomTicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_ScheduleTicker_MetaData[] = {
		{ "Category", "LFPGridTickerTable" },
		{ "EditCondition", "!bIsRandomOnly" },
		{ "ModuleRelativePath", "Public/Components/LFPGridTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_ScheduleTicker = { "ScheduleTicker", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridTickerTable, ScheduleTicker), Z_Construct_UClass_UClass, Z_Construct_UClass_ULFPTickerObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_ScheduleTicker_MetaData), Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_ScheduleTicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_TickDelay_MetaData[] = {
		{ "Category", "LFPGridTickerTable" },
		{ "EditCondition", "!bIsRandomOnly" },
		{ "ModuleRelativePath", "Public/Components/LFPGridTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_TickDelay = { "TickDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridTickerTable, TickDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_TickDelay_MetaData), Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_TickDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_TickRandomOffset_MetaData[] = {
		{ "Category", "LFPGridTickerTable" },
		{ "EditCondition", "!bIsRandomOnly" },
		{ "ModuleRelativePath", "Public/Components/LFPGridTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_TickRandomOffset = { "TickRandomOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridTickerTable, TickRandomOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_TickRandomOffset_MetaData), Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_TickRandomOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_bIsRandomOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_RandomTicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_ScheduleTicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_TickDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewProp_TickRandomOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"LFPGridTickerTable",
		Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::PropPointers),
		sizeof(FLFPGridTickerTable),
		alignof(FLFPGridTickerTable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPGridTickerTable()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPGridTickerTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPGridTickerTable.InnerSingleton, Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPGridTickerTable.InnerSingleton;
	}
	DEFINE_FUNCTION(ULFPGridTickerComponent::execOnUpdateChuck)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_GET_STRUCT_REF(FLFPGridUpdateAction,Z_Param_Out_GridUpdateAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateChuck(Z_Param_RegionIndex,Z_Param_ChuckIndex,Z_Param_Out_GridUpdateAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridTickerComponent::execSetupContainer)
	{
		P_GET_OBJECT(ULFPGridContainerComponent,Z_Param_NewGridContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupContainer(Z_Param_NewGridContainer);
		P_NATIVE_END;
	}
	void ULFPGridTickerComponent::StaticRegisterNativesULFPGridTickerComponent()
	{
		UClass* Class = ULFPGridTickerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnUpdateChuck", &ULFPGridTickerComponent::execOnUpdateChuck },
			{ "SetupContainer", &ULFPGridTickerComponent::execSetupContainer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics
	{
		struct LFPGridTickerComponent_eventOnUpdateChuck_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridTickerComponent_eventOnUpdateChuck_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridTickerComponent_eventOnUpdateChuck_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::NewProp_ChuckIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::NewProp_GridUpdateAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::NewProp_GridUpdateAction = { "GridUpdateAction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridTickerComponent_eventOnUpdateChuck_Parms, GridUpdateAction), Z_Construct_UScriptStruct_FLFPGridUpdateAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::NewProp_GridUpdateAction_MetaData), Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::NewProp_GridUpdateAction_MetaData) }; // 1107001714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::NewProp_GridUpdateAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridTickerComponent, nullptr, "OnUpdateChuck", nullptr, nullptr, Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::LFPGridTickerComponent_eventOnUpdateChuck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::LFPGridTickerComponent_eventOnUpdateChuck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics
	{
		struct LFPGridTickerComponent_eventSetupContainer_Parms
		{
			ULFPGridContainerComponent* NewGridContainer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGridContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGridContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics::NewProp_NewGridContainer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics::NewProp_NewGridContainer = { "NewGridContainer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridTickerComponent_eventSetupContainer_Parms, NewGridContainer), Z_Construct_UClass_ULFPGridContainerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics::NewProp_NewGridContainer_MetaData), Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics::NewProp_NewGridContainer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics::NewProp_NewGridContainer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridTickerComponent | Function" },
		{ "ModuleRelativePath", "Public/Components/LFPGridTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridTickerComponent, nullptr, "SetupContainer", nullptr, nullptr, Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics::LFPGridTickerComponent_eventSetupContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics::LFPGridTickerComponent_eventSetupContainer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULFPGridTickerComponent);
	UClass* Z_Construct_UClass_ULFPGridTickerComponent_NoRegister()
	{
		return ULFPGridTickerComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULFPGridTickerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickerTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TickerTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GridContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFPGridTickerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULFPIndexTickerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridTickerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFPGridTickerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFPGridTickerComponent_OnUpdateChuck, "OnUpdateChuck" }, // 1549857297
		{ &Z_Construct_UFunction_ULFPGridTickerComponent_SetupContainer, "SetupContainer" }, // 2296348270
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridTickerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPGridTickerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/LFPGridTickerComponent.h" },
		{ "ModuleRelativePath", "Public/Components/LFPGridTickerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPGridTickerComponent_Statics::NewProp_TickerTable_MetaData[] = {
		{ "Category", "LFPGridTickerComponent" },
		{ "ModuleRelativePath", "Public/Components/LFPGridTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULFPGridTickerComponent_Statics::NewProp_TickerTable = { "TickerTable", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPGridTickerComponent, TickerTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridTickerComponent_Statics::NewProp_TickerTable_MetaData), Z_Construct_UClass_ULFPGridTickerComponent_Statics::NewProp_TickerTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPGridTickerComponent_Statics::NewProp_GridContainer_MetaData[] = {
		{ "Category", "LFPGridTickerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPGridTickerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULFPGridTickerComponent_Statics::NewProp_GridContainer = { "GridContainer", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPGridTickerComponent, GridContainer), Z_Construct_UClass_ULFPGridContainerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridTickerComponent_Statics::NewProp_GridContainer_MetaData), Z_Construct_UClass_ULFPGridTickerComponent_Statics::NewProp_GridContainer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFPGridTickerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridTickerComponent_Statics::NewProp_TickerTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridTickerComponent_Statics::NewProp_GridContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFPGridTickerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFPGridTickerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFPGridTickerComponent_Statics::ClassParams = {
		&ULFPGridTickerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFPGridTickerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridTickerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridTickerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFPGridTickerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridTickerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULFPGridTickerComponent()
	{
		if (!Z_Registration_Info_UClass_ULFPGridTickerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFPGridTickerComponent.OuterSingleton, Z_Construct_UClass_ULFPGridTickerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULFPGridTickerComponent.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<ULFPGridTickerComponent>()
	{
		return ULFPGridTickerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFPGridTickerComponent);
	ULFPGridTickerComponent::~ULFPGridTickerComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridTickerComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridTickerComponent_h_Statics::ScriptStructInfo[] = {
		{ FLFPGridTickerTable::StaticStruct, Z_Construct_UScriptStruct_FLFPGridTickerTable_Statics::NewStructOps, TEXT("LFPGridTickerTable"), &Z_Registration_Info_UScriptStruct_LFPGridTickerTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPGridTickerTable), 4163816300U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridTickerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULFPGridTickerComponent, ULFPGridTickerComponent::StaticClass, TEXT("ULFPGridTickerComponent"), &Z_Registration_Info_UClass_ULFPGridTickerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFPGridTickerComponent), 1243244529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridTickerComponent_h_1290245590(TEXT("/Script/LohFunctionPlugin"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridTickerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridTickerComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridTickerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridTickerComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
