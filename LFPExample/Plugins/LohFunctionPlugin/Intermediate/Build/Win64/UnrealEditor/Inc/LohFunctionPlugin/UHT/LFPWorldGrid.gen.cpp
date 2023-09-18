// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPlugin/Public/Components/LFPWorldGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFPWorldGrid() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPWorldGrid();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPWorldGrid_NoRegister();
	LOHFUNCTIONPLUGIN_API UEnum* Z_Construct_UEnum_LohFunctionPlugin_ELFPGridType();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELFPGridType;
	static UEnum* ELFPGridType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELFPGridType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELFPGridType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LohFunctionPlugin_ELFPGridType, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("ELFPGridType"));
		}
		return Z_Registration_Info_UEnum_ELFPGridType.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGIN_API UEnum* StaticEnum<ELFPGridType>()
	{
		return ELFPGridType_StaticEnum();
	}
	struct Z_Construct_UEnum_LohFunctionPlugin_ELFPGridType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LohFunctionPlugin_ELFPGridType_Statics::Enumerators[] = {
		{ "ELFPGridType::Rectangular", (int64)ELFPGridType::Rectangular },
		{ "ELFPGridType::Hexagon", (int64)ELFPGridType::Hexagon },
		{ "ELFPGridType::Triangle", (int64)ELFPGridType::Triangle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LohFunctionPlugin_ELFPGridType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hexagon.DisplayName", "Hexagon" },
		{ "Hexagon.Name", "ELFPGridType::Hexagon" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
		{ "Rectangular.DisplayName", "Rectangular" },
		{ "Rectangular.Name", "ELFPGridType::Rectangular" },
		{ "Triangle.DisplayName", "Triangle" },
		{ "Triangle.Name", "ELFPGridType::Triangle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LohFunctionPlugin_ELFPGridType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		"ELFPGridType",
		"ELFPGridType",
		Z_Construct_UEnum_LohFunctionPlugin_ELFPGridType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LohFunctionPlugin_ELFPGridType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LohFunctionPlugin_ELFPGridType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LohFunctionPlugin_ELFPGridType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LohFunctionPlugin_ELFPGridType()
	{
		if (!Z_Registration_Info_UEnum_ELFPGridType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELFPGridType.InnerSingleton, Z_Construct_UEnum_LohFunctionPlugin_ELFPGridType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELFPGridType.InnerSingleton;
	}
	DEFINE_FUNCTION(ULFPWorldGrid::execGetGridType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELFPGridType*)Z_Param__Result=P_THIS->GetGridType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPWorldGrid::execGetGridGap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGridGap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPWorldGrid::execGetGridSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->GetGridSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPWorldGrid::execGetCenterOrigin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCenterOrigin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPWorldGrid::execGetVolumeSize)
	{
		P_GET_UBOOL(Z_Param_bHalfVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetVolumeSize(Z_Param_bHalfVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPWorldGrid::execGetGridLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGridLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPWorldGrid::execIndexToWorldLocation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_AddHalfGap);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ReturnRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IndexToWorldLocation(Z_Param_Index,Z_Param_AddHalfGap,Z_Param_Out_ReturnLocation,Z_Param_Out_ReturnRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPWorldGrid::execGridLocationToWorldLocation)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Location);
		P_GET_UBOOL(Z_Param_AddHalfGap);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ReturnRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GridLocationToWorldLocation(Z_Param_Location,Z_Param_AddHalfGap,Z_Param_Out_ReturnLocation,Z_Param_Out_ReturnRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPWorldGrid::execIsWorldLocationValid)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWorldLocationValid(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPWorldGrid::execWorldLocationToGridLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->WorldLocationToGridLocation(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPWorldGrid::execWorldLocationToIndex)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->WorldLocationToIndex(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	void ULFPWorldGrid::StaticRegisterNativesULFPWorldGrid()
	{
		UClass* Class = ULFPWorldGrid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCenterOrigin", &ULFPWorldGrid::execGetCenterOrigin },
			{ "GetGridGap", &ULFPWorldGrid::execGetGridGap },
			{ "GetGridLength", &ULFPWorldGrid::execGetGridLength },
			{ "GetGridSize", &ULFPWorldGrid::execGetGridSize },
			{ "GetGridType", &ULFPWorldGrid::execGetGridType },
			{ "GetVolumeSize", &ULFPWorldGrid::execGetVolumeSize },
			{ "GridLocationToWorldLocation", &ULFPWorldGrid::execGridLocationToWorldLocation },
			{ "IndexToWorldLocation", &ULFPWorldGrid::execIndexToWorldLocation },
			{ "IsWorldLocationValid", &ULFPWorldGrid::execIsWorldLocationValid },
			{ "WorldLocationToGridLocation", &ULFPWorldGrid::execWorldLocationToGridLocation },
			{ "WorldLocationToIndex", &ULFPWorldGrid::execWorldLocationToIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin_Statics
	{
		struct LFPWorldGrid_eventGetCenterOrigin_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPWorldGrid_eventGetCenterOrigin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPWorldGrid_eventGetCenterOrigin_Parms), &Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridSystem" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPWorldGrid, nullptr, "GetCenterOrigin", nullptr, nullptr, Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin_Statics::LFPWorldGrid_eventGetCenterOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin_Statics::LFPWorldGrid_eventGetCenterOrigin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPWorldGrid_GetGridGap_Statics
	{
		struct LFPWorldGrid_eventGetGridGap_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPWorldGrid_GetGridGap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPWorldGrid_eventGetGridGap_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPWorldGrid_GetGridGap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_GetGridGap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_GetGridGap_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridSystem" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPWorldGrid_GetGridGap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPWorldGrid, nullptr, "GetGridGap", nullptr, nullptr, Z_Construct_UFunction_ULFPWorldGrid_GetGridGap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetGridGap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPWorldGrid_GetGridGap_Statics::LFPWorldGrid_eventGetGridGap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetGridGap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPWorldGrid_GetGridGap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetGridGap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPWorldGrid_GetGridGap_Statics::LFPWorldGrid_eventGetGridGap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPWorldGrid_GetGridGap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPWorldGrid_GetGridGap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPWorldGrid_GetGridLength_Statics
	{
		struct LFPWorldGrid_eventGetGridLength_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPWorldGrid_GetGridLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPWorldGrid_eventGetGridLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPWorldGrid_GetGridLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_GetGridLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_GetGridLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridSystem" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPWorldGrid_GetGridLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPWorldGrid, nullptr, "GetGridLength", nullptr, nullptr, Z_Construct_UFunction_ULFPWorldGrid_GetGridLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetGridLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPWorldGrid_GetGridLength_Statics::LFPWorldGrid_eventGetGridLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetGridLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPWorldGrid_GetGridLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetGridLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPWorldGrid_GetGridLength_Statics::LFPWorldGrid_eventGetGridLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPWorldGrid_GetGridLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPWorldGrid_GetGridLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPWorldGrid_GetGridSize_Statics
	{
		struct LFPWorldGrid_eventGetGridSize_Parms
		{
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPWorldGrid_GetGridSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPWorldGrid_eventGetGridSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPWorldGrid_GetGridSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_GetGridSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_GetGridSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridSystem" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPWorldGrid_GetGridSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPWorldGrid, nullptr, "GetGridSize", nullptr, nullptr, Z_Construct_UFunction_ULFPWorldGrid_GetGridSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetGridSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPWorldGrid_GetGridSize_Statics::LFPWorldGrid_eventGetGridSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetGridSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPWorldGrid_GetGridSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetGridSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPWorldGrid_GetGridSize_Statics::LFPWorldGrid_eventGetGridSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPWorldGrid_GetGridSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPWorldGrid_GetGridSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPWorldGrid_GetGridType_Statics
	{
		struct LFPWorldGrid_eventGetGridType_Parms
		{
			ELFPGridType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULFPWorldGrid_GetGridType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULFPWorldGrid_GetGridType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPWorldGrid_eventGetGridType_Parms, ReturnValue), Z_Construct_UEnum_LohFunctionPlugin_ELFPGridType, METADATA_PARAMS(0, nullptr) }; // 4125401254
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPWorldGrid_GetGridType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_GetGridType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_GetGridType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_GetGridType_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridSystem" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPWorldGrid_GetGridType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPWorldGrid, nullptr, "GetGridType", nullptr, nullptr, Z_Construct_UFunction_ULFPWorldGrid_GetGridType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetGridType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPWorldGrid_GetGridType_Statics::LFPWorldGrid_eventGetGridType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetGridType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPWorldGrid_GetGridType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetGridType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPWorldGrid_GetGridType_Statics::LFPWorldGrid_eventGetGridType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPWorldGrid_GetGridType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPWorldGrid_GetGridType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics
	{
		struct LFPWorldGrid_eventGetVolumeSize_Parms
		{
			bool bHalfVolume;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHalfVolume_MetaData[];
#endif
		static void NewProp_bHalfVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHalfVolume;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::NewProp_bHalfVolume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::NewProp_bHalfVolume_SetBit(void* Obj)
	{
		((LFPWorldGrid_eventGetVolumeSize_Parms*)Obj)->bHalfVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::NewProp_bHalfVolume = { "bHalfVolume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPWorldGrid_eventGetVolumeSize_Parms), &Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::NewProp_bHalfVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::NewProp_bHalfVolume_MetaData), Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::NewProp_bHalfVolume_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPWorldGrid_eventGetVolumeSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::NewProp_bHalfVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridSystem" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPWorldGrid, nullptr, "GetVolumeSize", nullptr, nullptr, Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::LFPWorldGrid_eventGetVolumeSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::LFPWorldGrid_eventGetVolumeSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics
	{
		struct LFPWorldGrid_eventGridLocationToWorldLocation_Parms
		{
			FIntVector Location;
			bool AddHalfGap;
			FVector ReturnLocation;
			FRotator ReturnRotation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddHalfGap_MetaData[];
#endif
		static void NewProp_AddHalfGap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AddHalfGap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnRotation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPWorldGrid_eventGridLocationToWorldLocation_Parms, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_AddHalfGap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_AddHalfGap_SetBit(void* Obj)
	{
		((LFPWorldGrid_eventGridLocationToWorldLocation_Parms*)Obj)->AddHalfGap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_AddHalfGap = { "AddHalfGap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPWorldGrid_eventGridLocationToWorldLocation_Parms), &Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_AddHalfGap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_AddHalfGap_MetaData), Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_AddHalfGap_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_ReturnLocation = { "ReturnLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPWorldGrid_eventGridLocationToWorldLocation_Parms, ReturnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_ReturnRotation = { "ReturnRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPWorldGrid_eventGridLocationToWorldLocation_Parms, ReturnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPWorldGrid_eventGridLocationToWorldLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPWorldGrid_eventGridLocationToWorldLocation_Parms), &Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_AddHalfGap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_ReturnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_ReturnRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridSystem" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPWorldGrid, nullptr, "GridLocationToWorldLocation", nullptr, nullptr, Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::LFPWorldGrid_eventGridLocationToWorldLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::LFPWorldGrid_eventGridLocationToWorldLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics
	{
		struct LFPWorldGrid_eventIndexToWorldLocation_Parms
		{
			int32 Index;
			bool AddHalfGap;
			FVector ReturnLocation;
			FRotator ReturnRotation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddHalfGap_MetaData[];
#endif
		static void NewProp_AddHalfGap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AddHalfGap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnRotation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPWorldGrid_eventIndexToWorldLocation_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_Index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_AddHalfGap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_AddHalfGap_SetBit(void* Obj)
	{
		((LFPWorldGrid_eventIndexToWorldLocation_Parms*)Obj)->AddHalfGap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_AddHalfGap = { "AddHalfGap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPWorldGrid_eventIndexToWorldLocation_Parms), &Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_AddHalfGap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_AddHalfGap_MetaData), Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_AddHalfGap_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_ReturnLocation = { "ReturnLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPWorldGrid_eventIndexToWorldLocation_Parms, ReturnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_ReturnRotation = { "ReturnRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPWorldGrid_eventIndexToWorldLocation_Parms, ReturnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPWorldGrid_eventIndexToWorldLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPWorldGrid_eventIndexToWorldLocation_Parms), &Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_AddHalfGap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_ReturnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_ReturnRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridSystem" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPWorldGrid, nullptr, "IndexToWorldLocation", nullptr, nullptr, Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::LFPWorldGrid_eventIndexToWorldLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::LFPWorldGrid_eventIndexToWorldLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics
	{
		struct LFPWorldGrid_eventIsWorldLocationValid_Parms
		{
			FVector Location;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPWorldGrid_eventIsWorldLocationValid_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::NewProp_Location_MetaData) };
	void Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPWorldGrid_eventIsWorldLocationValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPWorldGrid_eventIsWorldLocationValid_Parms), &Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridSystem" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPWorldGrid, nullptr, "IsWorldLocationValid", nullptr, nullptr, Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::LFPWorldGrid_eventIsWorldLocationValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::LFPWorldGrid_eventIsWorldLocationValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics
	{
		struct LFPWorldGrid_eventWorldLocationToGridLocation_Parms
		{
			FVector Location;
			FIntVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPWorldGrid_eventWorldLocationToGridLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::NewProp_Location_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPWorldGrid_eventWorldLocationToGridLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridSystem" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPWorldGrid, nullptr, "WorldLocationToGridLocation", nullptr, nullptr, Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::LFPWorldGrid_eventWorldLocationToGridLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::LFPWorldGrid_eventWorldLocationToGridLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics
	{
		struct LFPWorldGrid_eventWorldLocationToIndex_Parms
		{
			FVector Location;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPWorldGrid_eventWorldLocationToIndex_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::NewProp_Location_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPWorldGrid_eventWorldLocationToIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridSystem" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPWorldGrid, nullptr, "WorldLocationToIndex", nullptr, nullptr, Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::LFPWorldGrid_eventWorldLocationToIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::LFPWorldGrid_eventWorldLocationToIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULFPWorldGrid);
	UClass* Z_Construct_UClass_ULFPWorldGrid_NoRegister()
	{
		return ULFPWorldGrid::StaticClass();
	}
	struct Z_Construct_UClass_ULFPWorldGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterOrigin_MetaData[];
#endif
		static void NewProp_bCenterOrigin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridGap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridGap;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GridType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GridType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFPWorldGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPWorldGrid_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFPWorldGrid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFPWorldGrid_GetCenterOrigin, "GetCenterOrigin" }, // 3951725061
		{ &Z_Construct_UFunction_ULFPWorldGrid_GetGridGap, "GetGridGap" }, // 1317016999
		{ &Z_Construct_UFunction_ULFPWorldGrid_GetGridLength, "GetGridLength" }, // 3981256374
		{ &Z_Construct_UFunction_ULFPWorldGrid_GetGridSize, "GetGridSize" }, // 3261850277
		{ &Z_Construct_UFunction_ULFPWorldGrid_GetGridType, "GetGridType" }, // 428667094
		{ &Z_Construct_UFunction_ULFPWorldGrid_GetVolumeSize, "GetVolumeSize" }, // 2468920757
		{ &Z_Construct_UFunction_ULFPWorldGrid_GridLocationToWorldLocation, "GridLocationToWorldLocation" }, // 1881871095
		{ &Z_Construct_UFunction_ULFPWorldGrid_IndexToWorldLocation, "IndexToWorldLocation" }, // 4009028289
		{ &Z_Construct_UFunction_ULFPWorldGrid_IsWorldLocationValid, "IsWorldLocationValid" }, // 3801786534
		{ &Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToGridLocation, "WorldLocationToGridLocation" }, // 1794805859
		{ &Z_Construct_UFunction_ULFPWorldGrid_WorldLocationToIndex, "WorldLocationToIndex" }, // 1474443477
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPWorldGrid_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPWorldGrid_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "LFPlugin" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/LFPWorldGrid.h" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_bCenterOrigin_MetaData[] = {
		{ "Category", "LFPGridSystem | Variable" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
	};
#endif
	void Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_bCenterOrigin_SetBit(void* Obj)
	{
		((ULFPWorldGrid*)Obj)->bCenterOrigin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_bCenterOrigin = { "bCenterOrigin", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULFPWorldGrid), &Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_bCenterOrigin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_bCenterOrigin_MetaData), Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_bCenterOrigin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "LFPGridSystem | Variable" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPWorldGrid, GridSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridSize_MetaData), Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridGap_MetaData[] = {
		{ "Category", "LFPGridSystem | Variable" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridGap = { "GridGap", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPWorldGrid, GridGap), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridGap_MetaData), Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridGap_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridType_MetaData[] = {
		{ "Category", "LFPGridSystem | Variable" },
		{ "ModuleRelativePath", "Public/Components/LFPWorldGrid.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridType = { "GridType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPWorldGrid, GridType), Z_Construct_UEnum_LohFunctionPlugin_ELFPGridType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridType_MetaData), Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridType_MetaData) }; // 4125401254
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFPWorldGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_bCenterOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridGap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPWorldGrid_Statics::NewProp_GridType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFPWorldGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFPWorldGrid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFPWorldGrid_Statics::ClassParams = {
		&ULFPWorldGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFPWorldGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFPWorldGrid_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPWorldGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFPWorldGrid_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPWorldGrid_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULFPWorldGrid()
	{
		if (!Z_Registration_Info_UClass_ULFPWorldGrid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFPWorldGrid.OuterSingleton, Z_Construct_UClass_ULFPWorldGrid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULFPWorldGrid.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<ULFPWorldGrid>()
	{
		return ULFPWorldGrid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFPWorldGrid);
	ULFPWorldGrid::~ULFPWorldGrid() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_Statics::EnumInfo[] = {
		{ ELFPGridType_StaticEnum, TEXT("ELFPGridType"), &Z_Registration_Info_UEnum_ELFPGridType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4125401254U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULFPWorldGrid, ULFPWorldGrid::StaticClass, TEXT("ULFPWorldGrid"), &Z_Registration_Info_UClass_ULFPWorldGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFPWorldGrid), 1281214140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_3138192179(TEXT("/Script/LohFunctionPlugin"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
