// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAILibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAILibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAILibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAILibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_MoveTo_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterStance();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAbilityInput();
// End Cross Module References
	DEFINE_FUNCTION(USBZAILibrary::execCreateActionData)
	{
		P_GET_OBJECT(UClass,Z_Param_ObjectClass);
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZAIActionData**)Z_Param__Result=USBZAILibrary::CreateActionData(Z_Param_ObjectClass,Z_Param_Outer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAILibrary::execCreateAIOrder)
	{
		P_GET_OBJECT(UClass,Z_Param_OrderClass);
		P_GET_OBJECT(ASBZAIController,Z_Param_AIController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZAIOrder**)Z_Param__Result=USBZAILibrary::CreateAIOrder(Z_Param_OrderClass,Z_Param_AIController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAILibrary::execCreateAIOrderMoveTo)
	{
		P_GET_OBJECT(UClass,Z_Param_OrderClass);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_OBJECT(ASBZAIController,Z_Param_AIController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZAIOrder_MoveTo**)Z_Param__Result=USBZAILibrary::CreateAIOrderMoveTo(Z_Param_OrderClass,Z_Param_Location,Z_Param_AIController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAILibrary::execDespawnAICharacter)
	{
		P_GET_OBJECT(ASBZAICharacter,Z_Param_AICharacter);
		P_GET_UBOOL(Z_Param_bPerformDespawnTagCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZAILibrary::DespawnAICharacter(Z_Param_AICharacter,Z_Param_bPerformDespawnTagCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAILibrary::execDetectNavBottleNeckAndRelocate)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BlockingCharacterLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BlockedCharacterDirection);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutBottleNeckSqSize2D);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutRelocationPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CharacterRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BottleNeckSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZAILibrary::DetectNavBottleNeckAndRelocate(Z_Param_WorldContextObject,Z_Param_Out_BlockingCharacterLocation,Z_Param_Out_BlockedCharacterDirection,Z_Param_Out_OutBottleNeckSqSize2D,Z_Param_Out_OutRelocationPosition,Z_Param_CharacterRadius,Z_Param_BottleNeckSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAILibrary::execFindDistance2DToWallAlongDir)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_OBJECT(UClass,Z_Param_FilterClass);
		P_GET_UBOOL(Z_Param_bProjectStartLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZAILibrary::FindDistance2DToWallAlongDir(Z_Param_Character,Z_Param_MaxDistance,Z_Param_Direction,Z_Param_FilterClass,Z_Param_bProjectStartLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAILibrary::execGetNavAreaSmallestSideSqSize)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_CharacterLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SearchRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WallAdditiveLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZAILibrary::GetNavAreaSmallestSideSqSize(Z_Param_WorldContextObject,Z_Param_CharacterLocation,Z_Param_SearchRange,Z_Param_WallAdditiveLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAILibrary::execIsLocationSafeFromNeighbours)
	{
		P_GET_OBJECT(ASBZAIBaseCharacter,Z_Param_Character);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxImpactTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DiameterInflation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZAILibrary::IsLocationSafeFromNeighbours(Z_Param_Character,Z_Param_Out_Location,Z_Param_MaxImpactTime,Z_Param_DiameterInflation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAILibrary::execMakeNoise)
	{
		P_GET_OBJECT(AActor,Z_Param_NoiseGenerator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Range);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Lifetime);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_OBJECT(AActor,Z_Param_NoiseInstigator);
		P_GET_OBJECT(ASBZRoomVolume,Z_Param_Room);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZAILibrary::MakeNoise(Z_Param_NoiseGenerator,Z_Param_Range,Z_Param_Lifetime,Z_Param_Out_Tag,Z_Param_NoiseInstigator,Z_Param_Room);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAILibrary::execPlayerCenterOfMass)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=USBZAILibrary::PlayerCenterOfMass(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAILibrary::execPushAction)
	{
		P_GET_OBJECT(UObject,Z_Param_Owner);
		P_GET_OBJECT(USBZAIActionData,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZAIAction**)Z_Param__Result=USBZAILibrary::PushAction(Z_Param_Owner,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAILibrary::execSetStance)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_ENUM(ESBZCharacterStance,Z_Param_InStance);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZAILibrary::SetStance(Z_Param_Character,ESBZCharacterStance(Z_Param_InStance));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAILibrary::execTriggerAbility)
	{
		P_GET_OBJECT(ASBZAICharacter,Z_Param_Character);
		P_GET_ENUM(ESBZAbilityInput,Z_Param_InAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZAILibrary::TriggerAbility(Z_Param_Character,ESBZAbilityInput(Z_Param_InAbility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAILibrary::execTryEnableAirNavigation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CenterLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoundsExtent);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForwardVector);
		P_GET_OBJECT(AActor,Z_Param_ActorBlockingAirNav);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZAILibrary::TryEnableAirNavigation(Z_Param_Out_CenterLocation,Z_Param_Out_BoundsExtent,Z_Param_Out_ForwardVector,Z_Param_ActorBlockingAirNav);
		P_NATIVE_END;
	}
	void USBZAILibrary::StaticRegisterNativesUSBZAILibrary()
	{
		UClass* Class = USBZAILibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateActionData", &USBZAILibrary::execCreateActionData },
			{ "CreateAIOrder", &USBZAILibrary::execCreateAIOrder },
			{ "CreateAIOrderMoveTo", &USBZAILibrary::execCreateAIOrderMoveTo },
			{ "DespawnAICharacter", &USBZAILibrary::execDespawnAICharacter },
			{ "DetectNavBottleNeckAndRelocate", &USBZAILibrary::execDetectNavBottleNeckAndRelocate },
			{ "FindDistance2DToWallAlongDir", &USBZAILibrary::execFindDistance2DToWallAlongDir },
			{ "GetNavAreaSmallestSideSqSize", &USBZAILibrary::execGetNavAreaSmallestSideSqSize },
			{ "IsLocationSafeFromNeighbours", &USBZAILibrary::execIsLocationSafeFromNeighbours },
			{ "MakeNoise", &USBZAILibrary::execMakeNoise },
			{ "PlayerCenterOfMass", &USBZAILibrary::execPlayerCenterOfMass },
			{ "PushAction", &USBZAILibrary::execPushAction },
			{ "SetStance", &USBZAILibrary::execSetStance },
			{ "TriggerAbility", &USBZAILibrary::execTriggerAbility },
			{ "TryEnableAirNavigation", &USBZAILibrary::execTryEnableAirNavigation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAILibrary_CreateActionData_Statics
	{
		struct SBZAILibrary_eventCreateActionData_Parms
		{
			TSubclassOf<USBZAIActionData>  ObjectClass;
			UObject* Outer;
			USBZAIActionData* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USBZAILibrary_CreateActionData_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventCreateActionData_Parms, ObjectClass), Z_Construct_UClass_USBZAIActionData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_CreateActionData_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventCreateActionData_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_CreateActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventCreateActionData_Parms, ReturnValue), Z_Construct_UClass_USBZAIActionData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAILibrary_CreateActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_CreateActionData_Statics::NewProp_ObjectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_CreateActionData_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_CreateActionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_CreateActionData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAILibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAILibrary_CreateActionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAILibrary, nullptr, "CreateActionData", nullptr, nullptr, sizeof(SBZAILibrary_eventCreateActionData_Parms), Z_Construct_UFunction_USBZAILibrary_CreateActionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_CreateActionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_CreateActionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_CreateActionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAILibrary_CreateActionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAILibrary_CreateActionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAILibrary_CreateAIOrder_Statics
	{
		struct SBZAILibrary_eventCreateAIOrder_Parms
		{
			TSubclassOf<USBZAIOrder>  OrderClass;
			ASBZAIController* AIController;
			USBZAIOrder* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OrderClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USBZAILibrary_CreateAIOrder_Statics::NewProp_OrderClass = { "OrderClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventCreateAIOrder_Parms, OrderClass), Z_Construct_UClass_USBZAIOrder_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_CreateAIOrder_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventCreateAIOrder_Parms, AIController), Z_Construct_UClass_ASBZAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_CreateAIOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventCreateAIOrder_Parms, ReturnValue), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAILibrary_CreateAIOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_CreateAIOrder_Statics::NewProp_OrderClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_CreateAIOrder_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_CreateAIOrder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_CreateAIOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAILibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAILibrary_CreateAIOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAILibrary, nullptr, "CreateAIOrder", nullptr, nullptr, sizeof(SBZAILibrary_eventCreateAIOrder_Parms), Z_Construct_UFunction_USBZAILibrary_CreateAIOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_CreateAIOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_CreateAIOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_CreateAIOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAILibrary_CreateAIOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAILibrary_CreateAIOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics
	{
		struct SBZAILibrary_eventCreateAIOrderMoveTo_Parms
		{
			TSubclassOf<USBZAIOrder_MoveTo>  OrderClass;
			FVector Location;
			ASBZAIController* AIController;
			USBZAIOrder_MoveTo* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OrderClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics::NewProp_OrderClass = { "OrderClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventCreateAIOrderMoveTo_Parms, OrderClass), Z_Construct_UClass_USBZAIOrder_MoveTo_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventCreateAIOrderMoveTo_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventCreateAIOrderMoveTo_Parms, AIController), Z_Construct_UClass_ASBZAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventCreateAIOrderMoveTo_Parms, ReturnValue), Z_Construct_UClass_USBZAIOrder_MoveTo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics::NewProp_OrderClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAILibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAILibrary, nullptr, "CreateAIOrderMoveTo", nullptr, nullptr, sizeof(SBZAILibrary_eventCreateAIOrderMoveTo_Parms), Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter_Statics
	{
		struct SBZAILibrary_eventDespawnAICharacter_Parms
		{
			ASBZAICharacter* AICharacter;
			bool bPerformDespawnTagCheck;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AICharacter;
		static void NewProp_bPerformDespawnTagCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPerformDespawnTagCheck;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter_Statics::NewProp_AICharacter = { "AICharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventDespawnAICharacter_Parms, AICharacter), Z_Construct_UClass_ASBZAICharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter_Statics::NewProp_bPerformDespawnTagCheck_SetBit(void* Obj)
	{
		((SBZAILibrary_eventDespawnAICharacter_Parms*)Obj)->bPerformDespawnTagCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter_Statics::NewProp_bPerformDespawnTagCheck = { "bPerformDespawnTagCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAILibrary_eventDespawnAICharacter_Parms), &Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter_Statics::NewProp_bPerformDespawnTagCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter_Statics::NewProp_AICharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter_Statics::NewProp_bPerformDespawnTagCheck,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAILibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAILibrary, nullptr, "DespawnAICharacter", nullptr, nullptr, sizeof(SBZAILibrary_eventDespawnAICharacter_Parms), Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics
	{
		struct SBZAILibrary_eventDetectNavBottleNeckAndRelocate_Parms
		{
			const UObject* WorldContextObject;
			FVector BlockingCharacterLocation;
			FVector BlockedCharacterDirection;
			float OutBottleNeckSqSize2D;
			FVector OutRelocationPosition;
			float CharacterRadius;
			float BottleNeckSize;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockingCharacterLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockingCharacterLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockedCharacterDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockedCharacterDirection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutBottleNeckSqSize2D;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRelocationPosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharacterRadius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BottleNeckSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventDetectNavBottleNeckAndRelocate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_BlockingCharacterLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_BlockingCharacterLocation = { "BlockingCharacterLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventDetectNavBottleNeckAndRelocate_Parms, BlockingCharacterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_BlockingCharacterLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_BlockingCharacterLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_BlockedCharacterDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_BlockedCharacterDirection = { "BlockedCharacterDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventDetectNavBottleNeckAndRelocate_Parms, BlockedCharacterDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_BlockedCharacterDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_BlockedCharacterDirection_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_OutBottleNeckSqSize2D = { "OutBottleNeckSqSize2D", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventDetectNavBottleNeckAndRelocate_Parms, OutBottleNeckSqSize2D), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_OutRelocationPosition = { "OutRelocationPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventDetectNavBottleNeckAndRelocate_Parms, OutRelocationPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_CharacterRadius = { "CharacterRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventDetectNavBottleNeckAndRelocate_Parms, CharacterRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_BottleNeckSize = { "BottleNeckSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventDetectNavBottleNeckAndRelocate_Parms, BottleNeckSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAILibrary_eventDetectNavBottleNeckAndRelocate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAILibrary_eventDetectNavBottleNeckAndRelocate_Parms), &Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_BlockingCharacterLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_BlockedCharacterDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_OutBottleNeckSqSize2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_OutRelocationPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_CharacterRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_BottleNeckSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAILibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAILibrary, nullptr, "DetectNavBottleNeckAndRelocate", nullptr, nullptr, sizeof(SBZAILibrary_eventDetectNavBottleNeckAndRelocate_Parms), Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics
	{
		struct SBZAILibrary_eventFindDistance2DToWallAlongDir_Parms
		{
			const ASBZCharacter* Character;
			float MaxDistance;
			FVector Direction;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool bProjectStartLocation;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProjectStartLocation_MetaData[];
#endif
		static void NewProp_bProjectStartLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectStartLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventFindDistance2DToWallAlongDir_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_Character_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventFindDistance2DToWallAlongDir_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventFindDistance2DToWallAlongDir_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventFindDistance2DToWallAlongDir_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_bProjectStartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_bProjectStartLocation_SetBit(void* Obj)
	{
		((SBZAILibrary_eventFindDistance2DToWallAlongDir_Parms*)Obj)->bProjectStartLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_bProjectStartLocation = { "bProjectStartLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAILibrary_eventFindDistance2DToWallAlongDir_Parms), &Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_bProjectStartLocation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_bProjectStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_bProjectStartLocation_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventFindDistance2DToWallAlongDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_bProjectStartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAILibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAILibrary, nullptr, "FindDistance2DToWallAlongDir", nullptr, nullptr, sizeof(SBZAILibrary_eventFindDistance2DToWallAlongDir_Parms), Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics
	{
		struct SBZAILibrary_eventGetNavAreaSmallestSideSqSize_Parms
		{
			const UObject* WorldContextObject;
			FVector CharacterLocation;
			float SearchRange;
			float WallAdditiveLength;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SearchRange;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallAdditiveLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventGetNavAreaSmallestSideSqSize_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::NewProp_CharacterLocation = { "CharacterLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventGetNavAreaSmallestSideSqSize_Parms, CharacterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::NewProp_SearchRange = { "SearchRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventGetNavAreaSmallestSideSqSize_Parms, SearchRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::NewProp_WallAdditiveLength = { "WallAdditiveLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventGetNavAreaSmallestSideSqSize_Parms, WallAdditiveLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventGetNavAreaSmallestSideSqSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::NewProp_CharacterLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::NewProp_SearchRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::NewProp_WallAdditiveLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAILibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAILibrary, nullptr, "GetNavAreaSmallestSideSqSize", nullptr, nullptr, sizeof(SBZAILibrary_eventGetNavAreaSmallestSideSqSize_Parms), Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics
	{
		struct SBZAILibrary_eventIsLocationSafeFromNeighbours_Parms
		{
			const ASBZAIBaseCharacter* Character;
			FVector Location;
			float MaxImpactTime;
			float DiameterInflation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxImpactTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiameterInflation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventIsLocationSafeFromNeighbours_Parms, Character), Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventIsLocationSafeFromNeighbours_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_MaxImpactTime = { "MaxImpactTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventIsLocationSafeFromNeighbours_Parms, MaxImpactTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_DiameterInflation = { "DiameterInflation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventIsLocationSafeFromNeighbours_Parms, DiameterInflation), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAILibrary_eventIsLocationSafeFromNeighbours_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAILibrary_eventIsLocationSafeFromNeighbours_Parms), &Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_MaxImpactTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_DiameterInflation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAILibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAILibrary, nullptr, "IsLocationSafeFromNeighbours", nullptr, nullptr, sizeof(SBZAILibrary_eventIsLocationSafeFromNeighbours_Parms), Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics
	{
		struct SBZAILibrary_eventMakeNoise_Parms
		{
			AActor* NoiseGenerator;
			float Range;
			float Lifetime;
			FGameplayTag Tag;
			AActor* NoiseInstigator;
			ASBZRoomVolume* Room;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseGenerator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseInstigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::NewProp_NoiseGenerator = { "NoiseGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventMakeNoise_Parms, NoiseGenerator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventMakeNoise_Parms, Range), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventMakeNoise_Parms, Lifetime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventMakeNoise_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::NewProp_NoiseInstigator = { "NoiseInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventMakeNoise_Parms, NoiseInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventMakeNoise_Parms, Room), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::NewProp_NoiseGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::NewProp_Lifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::NewProp_NoiseInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAILibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAILibrary, nullptr, "MakeNoise", nullptr, nullptr, sizeof(SBZAILibrary_eventMakeNoise_Parms), Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAILibrary_MakeNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAILibrary_MakeNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass_Statics
	{
		struct SBZAILibrary_eventPlayerCenterOfMass_Parms
		{
			const UObject* WorldContextObject;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventPlayerCenterOfMass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventPlayerCenterOfMass_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAILibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAILibrary, nullptr, "PlayerCenterOfMass", nullptr, nullptr, sizeof(SBZAILibrary_eventPlayerCenterOfMass_Parms), Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAILibrary_PushAction_Statics
	{
		struct SBZAILibrary_eventPushAction_Parms
		{
			UObject* Owner;
			const USBZAIActionData* Data;
			USBZAIAction* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventPushAction_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventPushAction_Parms, Data), Z_Construct_UClass_USBZAIActionData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventPushAction_Parms, ReturnValue), Z_Construct_UClass_USBZAIAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAILibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAILibrary, nullptr, "PushAction", nullptr, nullptr, sizeof(SBZAILibrary_eventPushAction_Parms), Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAILibrary_PushAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAILibrary_PushAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAILibrary_SetStance_Statics
	{
		struct SBZAILibrary_eventSetStance_Parms
		{
			ASBZCharacter* Character;
			ESBZCharacterStance InStance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InStance_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InStance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_SetStance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventSetStance_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAILibrary_SetStance_Statics::NewProp_InStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAILibrary_SetStance_Statics::NewProp_InStance = { "InStance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventSetStance_Parms, InStance), Z_Construct_UEnum_Starbreeze_ESBZCharacterStance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAILibrary_SetStance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_SetStance_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_SetStance_Statics::NewProp_InStance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_SetStance_Statics::NewProp_InStance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_SetStance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAILibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAILibrary_SetStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAILibrary, nullptr, "SetStance", nullptr, nullptr, sizeof(SBZAILibrary_eventSetStance_Parms), Z_Construct_UFunction_USBZAILibrary_SetStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_SetStance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_SetStance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_SetStance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAILibrary_SetStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAILibrary_SetStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAILibrary_TriggerAbility_Statics
	{
		struct SBZAILibrary_eventTriggerAbility_Parms
		{
			ASBZAICharacter* Character;
			ESBZAbilityInput InAbility;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InAbility_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_TriggerAbility_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventTriggerAbility_Parms, Character), Z_Construct_UClass_ASBZAICharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAILibrary_TriggerAbility_Statics::NewProp_InAbility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAILibrary_TriggerAbility_Statics::NewProp_InAbility = { "InAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventTriggerAbility_Parms, InAbility), Z_Construct_UEnum_Starbreeze_ESBZAbilityInput, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAILibrary_TriggerAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_TriggerAbility_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_TriggerAbility_Statics::NewProp_InAbility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_TriggerAbility_Statics::NewProp_InAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_TriggerAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAILibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAILibrary_TriggerAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAILibrary, nullptr, "TriggerAbility", nullptr, nullptr, sizeof(SBZAILibrary_eventTriggerAbility_Parms), Z_Construct_UFunction_USBZAILibrary_TriggerAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_TriggerAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_TriggerAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_TriggerAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAILibrary_TriggerAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAILibrary_TriggerAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics
	{
		struct SBZAILibrary_eventTryEnableAirNavigation_Parms
		{
			FVector CenterLocation;
			FVector BoundsExtent;
			FVector ForwardVector;
			const AActor* ActorBlockingAirNav;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorBlockingAirNav_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorBlockingAirNav;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_CenterLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_CenterLocation = { "CenterLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventTryEnableAirNavigation_Parms, CenterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_CenterLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_CenterLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_BoundsExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_BoundsExtent = { "BoundsExtent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventTryEnableAirNavigation_Parms, BoundsExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_BoundsExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_BoundsExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_ForwardVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventTryEnableAirNavigation_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_ForwardVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_ForwardVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_ActorBlockingAirNav_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_ActorBlockingAirNav = { "ActorBlockingAirNav", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAILibrary_eventTryEnableAirNavigation_Parms, ActorBlockingAirNav), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_ActorBlockingAirNav_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_ActorBlockingAirNav_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_CenterLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_BoundsExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_ForwardVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::NewProp_ActorBlockingAirNav,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAILibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAILibrary, nullptr, "TryEnableAirNavigation", nullptr, nullptr, sizeof(SBZAILibrary_eventTryEnableAirNavigation_Parms), Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAILibrary_NoRegister()
	{
		return USBZAILibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZAILibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAILibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAILibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAILibrary_CreateActionData, "CreateActionData" }, // 4061497010
		{ &Z_Construct_UFunction_USBZAILibrary_CreateAIOrder, "CreateAIOrder" }, // 1824832690
		{ &Z_Construct_UFunction_USBZAILibrary_CreateAIOrderMoveTo, "CreateAIOrderMoveTo" }, // 3799069432
		{ &Z_Construct_UFunction_USBZAILibrary_DespawnAICharacter, "DespawnAICharacter" }, // 4032653016
		{ &Z_Construct_UFunction_USBZAILibrary_DetectNavBottleNeckAndRelocate, "DetectNavBottleNeckAndRelocate" }, // 2454525963
		{ &Z_Construct_UFunction_USBZAILibrary_FindDistance2DToWallAlongDir, "FindDistance2DToWallAlongDir" }, // 2901772653
		{ &Z_Construct_UFunction_USBZAILibrary_GetNavAreaSmallestSideSqSize, "GetNavAreaSmallestSideSqSize" }, // 3528388062
		{ &Z_Construct_UFunction_USBZAILibrary_IsLocationSafeFromNeighbours, "IsLocationSafeFromNeighbours" }, // 2207913501
		{ &Z_Construct_UFunction_USBZAILibrary_MakeNoise, "MakeNoise" }, // 2097282852
		{ &Z_Construct_UFunction_USBZAILibrary_PlayerCenterOfMass, "PlayerCenterOfMass" }, // 3874639959
		{ &Z_Construct_UFunction_USBZAILibrary_PushAction, "PushAction" }, // 3226203020
		{ &Z_Construct_UFunction_USBZAILibrary_SetStance, "SetStance" }, // 1716272539
		{ &Z_Construct_UFunction_USBZAILibrary_TriggerAbility, "TriggerAbility" }, // 4143295998
		{ &Z_Construct_UFunction_USBZAILibrary_TryEnableAirNavigation, "TryEnableAirNavigation" }, // 3357634115
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAILibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAILibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAILibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAILibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAILibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAILibrary_Statics::ClassParams = {
		&USBZAILibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAILibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAILibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAILibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAILibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAILibrary, 2093845420);
	template<> STARBREEZE_API UClass* StaticClass<USBZAILibrary>()
	{
		return USBZAILibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAILibrary(Z_Construct_UClass_USBZAILibrary, &USBZAILibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAILibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAILibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
