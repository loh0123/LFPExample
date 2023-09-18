// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPlugin/Public/Object/LFPTickerObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFPTickerObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPIndexTickerComponent_NoRegister();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPTickerObject();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPTickerObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPlugin();
// End Cross Module References
	DEFINE_FUNCTION(ULFPTickerObject::execOnExecute)
	{
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_TickGroup);
		P_GET_PROPERTY(FIntProperty,Z_Param_TickIndex);
		P_GET_OBJECT(ULFPIndexTickerComponent,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExecute_Implementation(Z_Param_Out_TickGroup,Z_Param_TickIndex,Z_Param_Caller);
		P_NATIVE_END;
	}
	struct LFPTickerObject_eventOnExecute_Parms
	{
		FIntPoint TickGroup;
		int32 TickIndex;
		ULFPIndexTickerComponent* Caller;
	};
	static FName NAME_ULFPTickerObject_OnExecute = FName(TEXT("OnExecute"));
	void ULFPTickerObject::OnExecute(FIntPoint const& TickGroup, const int32 TickIndex, ULFPIndexTickerComponent* Caller) const
	{
		LFPTickerObject_eventOnExecute_Parms Parms;
		Parms.TickGroup=TickGroup;
		Parms.TickIndex=TickIndex;
		Parms.Caller=Caller;
		const_cast<ULFPTickerObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPTickerObject_OnExecute),&Parms);
	}
	void ULFPTickerObject::StaticRegisterNativesULFPTickerObject()
	{
		UClass* Class = ULFPTickerObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnExecute", &ULFPTickerObject::execOnExecute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickGroup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TickGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TickIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Caller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::NewProp_TickGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::NewProp_TickGroup = { "TickGroup", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPTickerObject_eventOnExecute_Parms, TickGroup), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::NewProp_TickGroup_MetaData), Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::NewProp_TickGroup_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::NewProp_TickIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::NewProp_TickIndex = { "TickIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPTickerObject_eventOnExecute_Parms, TickIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::NewProp_TickIndex_MetaData), Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::NewProp_TickIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::NewProp_Caller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPTickerObject_eventOnExecute_Parms, Caller), Z_Construct_UClass_ULFPIndexTickerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::NewProp_Caller_MetaData), Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::NewProp_Caller_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::NewProp_TickGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::NewProp_TickIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/LFPTickerObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPTickerObject, nullptr, "OnExecute", nullptr, nullptr, Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::PropPointers), sizeof(LFPTickerObject_eventOnExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPTickerObject_eventOnExecute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPTickerObject_OnExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPTickerObject_OnExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULFPTickerObject);
	UClass* Z_Construct_UClass_ULFPTickerObject_NoRegister()
	{
		return ULFPTickerObject::StaticClass();
	}
	struct Z_Construct_UClass_ULFPTickerObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFPTickerObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPTickerObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFPTickerObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFPTickerObject_OnExecute, "OnExecute" }, // 489952894
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPTickerObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPTickerObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Object/LFPTickerObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Object/LFPTickerObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFPTickerObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFPTickerObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFPTickerObject_Statics::ClassParams = {
		&ULFPTickerObject::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPTickerObject_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFPTickerObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULFPTickerObject()
	{
		if (!Z_Registration_Info_UClass_ULFPTickerObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFPTickerObject.OuterSingleton, Z_Construct_UClass_ULFPTickerObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULFPTickerObject.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<ULFPTickerObject>()
	{
		return ULFPTickerObject::StaticClass();
	}
	ULFPTickerObject::ULFPTickerObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFPTickerObject);
	ULFPTickerObject::~ULFPTickerObject() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Object_LFPTickerObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Object_LFPTickerObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULFPTickerObject, ULFPTickerObject::StaticClass, TEXT("ULFPTickerObject"), &Z_Registration_Info_UClass_ULFPTickerObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFPTickerObject), 187960399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Object_LFPTickerObject_h_1509254989(TEXT("/Script/LohFunctionPlugin"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Object_LFPTickerObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Object_LFPTickerObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
