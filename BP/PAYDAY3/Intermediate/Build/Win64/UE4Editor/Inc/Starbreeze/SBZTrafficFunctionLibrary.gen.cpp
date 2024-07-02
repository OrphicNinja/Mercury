// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficFunctionLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTrafficFunctionLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTrafficFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTrafficSpline_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZTrafficNodeExec();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTrafficManager_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZTrafficNodeType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAerialVehicle_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(USBZTrafficFunctionLibrary::execAppendEscapeVanRoute)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(ASBZTrafficSpline,Z_Param_DestinationSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZTrafficFunctionLibrary::AppendEscapeVanRoute(Z_Param_WorldContextObject,Z_Param_DestinationSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficFunctionLibrary::execDriveEscapeVan)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM_REF(ESBZTrafficNodeExec,Z_Param_Out_Exec);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZTrafficFunctionLibrary::DriveEscapeVan(Z_Param_WorldContextObject,(ESBZTrafficNodeExec&)(Z_Param_Out_Exec),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficFunctionLibrary::execGetLocationAlongPathWithinAngle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bDebug);
		P_GET_TARRAY_REF(ASBZSpline*,Z_Param_Out_Path);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_ForwardDir);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StepDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=USBZTrafficFunctionLibrary::GetLocationAlongPathWithinAngle(Z_Param_WorldContextObject,Z_Param_bDebug,Z_Param_Out_Path,Z_Param_Distance,Z_Param_Location,Z_Param_ForwardDir,Z_Param_StepDistance,Z_Param_MaxDistance,Z_Param_MaxAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficFunctionLibrary::execGetTrafficManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZTrafficManager**)Z_Param__Result=USBZTrafficFunctionLibrary::GetTrafficManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficFunctionLibrary::execGetTrafficSplineGroundTransform)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(ASBZTrafficSpline,Z_Param_Spline);
		P_GET_ENUM(ESBZTrafficNodeType,Z_Param_TransformType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=USBZTrafficFunctionLibrary::GetTrafficSplineGroundTransform(Z_Param_WorldContextObject,Z_Param_Spline,ESBZTrafficNodeType(Z_Param_TransformType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficFunctionLibrary::execSetAndDriveAerialVehicleRoute)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(ASBZAerialVehicle,Z_Param_Vehicle);
		P_GET_OBJECT(ASBZTrafficSpline,Z_Param_StartSpline);
		P_GET_OBJECT(ASBZTrafficSpline,Z_Param_DestinationSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZTrafficFunctionLibrary::SetAndDriveAerialVehicleRoute(Z_Param_WorldContextObject,Z_Param_Vehicle,Z_Param_StartSpline,Z_Param_DestinationSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficFunctionLibrary::execSetAndDriveEscapeVanRoute)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(ASBZWheeledVehicle,Z_Param_NewEscapeVan);
		P_GET_OBJECT(ASBZTrafficSpline,Z_Param_StartSpline);
		P_GET_OBJECT(ASBZTrafficSpline,Z_Param_DestinationSpline);
		P_GET_ENUM_REF(ESBZTrafficNodeExec,Z_Param_Out_Exec);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_UBOOL(Z_Param_bTeleportToPathStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZTrafficFunctionLibrary::SetAndDriveEscapeVanRoute(Z_Param_WorldContextObject,Z_Param_NewEscapeVan,Z_Param_StartSpline,Z_Param_DestinationSpline,(ESBZTrafficNodeExec&)(Z_Param_Out_Exec),Z_Param_LatentInfo,Z_Param_bTeleportToPathStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficFunctionLibrary::execSetEscapeVan)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(ASBZWheeledVehicle,Z_Param_Vehicle);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZTrafficFunctionLibrary::SetEscapeVan(Z_Param_WorldContextObject,Z_Param_Vehicle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficFunctionLibrary::execSetEscapeVanRoute)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(ASBZTrafficSpline,Z_Param_StartSpline);
		P_GET_OBJECT(ASBZTrafficSpline,Z_Param_DestinationSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZTrafficFunctionLibrary::SetEscapeVanRoute(Z_Param_WorldContextObject,Z_Param_StartSpline,Z_Param_DestinationSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficFunctionLibrary::execSpawnAndDriveSwatVan)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(ASBZTrafficSpline,Z_Param_StartSpline);
		P_GET_OBJECT(ASBZTrafficSpline,Z_Param_DestinationSpline);
		P_GET_ENUM_REF(ESBZTrafficNodeExec,Z_Param_Out_Exec);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZTrafficFunctionLibrary::SpawnAndDriveSwatVan(Z_Param_WorldContextObject,Z_Param_StartSpline,Z_Param_DestinationSpline,(ESBZTrafficNodeExec&)(Z_Param_Out_Exec),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficFunctionLibrary::execSpawnEscapeVan)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_EscapeVanActorClass);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
		P_GET_ENUM_REF(ESBZTrafficNodeExec,Z_Param_Out_Exec);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZTrafficFunctionLibrary::SpawnEscapeVan(Z_Param_WorldContextObject,Z_Param_EscapeVanActorClass,Z_Param_Out_SpawnTransform,(ESBZTrafficNodeExec&)(Z_Param_Out_Exec),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficFunctionLibrary::execSpawnEscapeVanWithRoute)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_EscapeVanActorClass);
		P_GET_OBJECT(ASBZTrafficSpline,Z_Param_StartSpline);
		P_GET_OBJECT(ASBZTrafficSpline,Z_Param_DestinationSpline);
		P_GET_ENUM_REF(ESBZTrafficNodeExec,Z_Param_Out_Exec);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZTrafficFunctionLibrary::SpawnEscapeVanWithRoute(Z_Param_WorldContextObject,Z_Param_EscapeVanActorClass,Z_Param_StartSpline,Z_Param_DestinationSpline,(ESBZTrafficNodeExec&)(Z_Param_Out_Exec),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	void USBZTrafficFunctionLibrary::StaticRegisterNativesUSBZTrafficFunctionLibrary()
	{
		UClass* Class = USBZTrafficFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendEscapeVanRoute", &USBZTrafficFunctionLibrary::execAppendEscapeVanRoute },
			{ "DriveEscapeVan", &USBZTrafficFunctionLibrary::execDriveEscapeVan },
			{ "GetLocationAlongPathWithinAngle", &USBZTrafficFunctionLibrary::execGetLocationAlongPathWithinAngle },
			{ "GetTrafficManager", &USBZTrafficFunctionLibrary::execGetTrafficManager },
			{ "GetTrafficSplineGroundTransform", &USBZTrafficFunctionLibrary::execGetTrafficSplineGroundTransform },
			{ "SetAndDriveAerialVehicleRoute", &USBZTrafficFunctionLibrary::execSetAndDriveAerialVehicleRoute },
			{ "SetAndDriveEscapeVanRoute", &USBZTrafficFunctionLibrary::execSetAndDriveEscapeVanRoute },
			{ "SetEscapeVan", &USBZTrafficFunctionLibrary::execSetEscapeVan },
			{ "SetEscapeVanRoute", &USBZTrafficFunctionLibrary::execSetEscapeVanRoute },
			{ "SpawnAndDriveSwatVan", &USBZTrafficFunctionLibrary::execSpawnAndDriveSwatVan },
			{ "SpawnEscapeVan", &USBZTrafficFunctionLibrary::execSpawnEscapeVan },
			{ "SpawnEscapeVanWithRoute", &USBZTrafficFunctionLibrary::execSpawnEscapeVanWithRoute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics
	{
		struct SBZTrafficFunctionLibrary_eventAppendEscapeVanRoute_Parms
		{
			UObject* WorldContextObject;
			ASBZTrafficSpline* DestinationSpline;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationSpline;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventAppendEscapeVanRoute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics::NewProp_DestinationSpline = { "DestinationSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventAppendEscapeVanRoute_Parms, DestinationSpline), Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZTrafficFunctionLibrary_eventAppendEscapeVanRoute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZTrafficFunctionLibrary_eventAppendEscapeVanRoute_Parms), &Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics::NewProp_DestinationSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficFunctionLibrary, nullptr, "AppendEscapeVanRoute", nullptr, nullptr, sizeof(SBZTrafficFunctionLibrary_eventAppendEscapeVanRoute_Parms), Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics
	{
		struct SBZTrafficFunctionLibrary_eventDriveEscapeVan_Parms
		{
			UObject* WorldContextObject;
			ESBZTrafficNodeExec Exec;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Exec_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Exec;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventDriveEscapeVan_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics::NewProp_Exec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics::NewProp_Exec = { "Exec", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventDriveEscapeVan_Parms, Exec), Z_Construct_UEnum_Starbreeze_ESBZTrafficNodeExec, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventDriveEscapeVan_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics::NewProp_Exec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics::NewProp_Exec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficFunctionLibrary, nullptr, "DriveEscapeVan", nullptr, nullptr, sizeof(SBZTrafficFunctionLibrary_eventDriveEscapeVan_Parms), Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics
	{
		struct SBZTrafficFunctionLibrary_eventGetLocationAlongPathWithinAngle_Parms
		{
			UObject* WorldContextObject;
			bool bDebug;
			TArray<ASBZSpline*> Path;
			float Distance;
			FVector Location;
			FVector ForwardDir;
			float StepDistance;
			float MaxDistance;
			float MaxAngle;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardDir;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StepDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventGetLocationAlongPathWithinAngle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((SBZTrafficFunctionLibrary_eventGetLocationAlongPathWithinAngle_Parms*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZTrafficFunctionLibrary_eventGetLocationAlongPathWithinAngle_Parms), &Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventGetLocationAlongPathWithinAngle_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventGetLocationAlongPathWithinAngle_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventGetLocationAlongPathWithinAngle_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_ForwardDir = { "ForwardDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventGetLocationAlongPathWithinAngle_Parms, ForwardDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_StepDistance = { "StepDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventGetLocationAlongPathWithinAngle_Parms, StepDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventGetLocationAlongPathWithinAngle_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventGetLocationAlongPathWithinAngle_Parms, MaxAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventGetLocationAlongPathWithinAngle_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_Path_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_ForwardDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_StepDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_MaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficFunctionLibrary, nullptr, "GetLocationAlongPathWithinAngle", nullptr, nullptr, sizeof(SBZTrafficFunctionLibrary_eventGetLocationAlongPathWithinAngle_Parms), Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficManager_Statics
	{
		struct SBZTrafficFunctionLibrary_eventGetTrafficManager_Parms
		{
			UObject* WorldContextObject;
			USBZTrafficManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventGetTrafficManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventGetTrafficManager_Parms, ReturnValue), Z_Construct_UClass_USBZTrafficManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficFunctionLibrary, nullptr, "GetTrafficManager", nullptr, nullptr, sizeof(SBZTrafficFunctionLibrary_eventGetTrafficManager_Parms), Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics
	{
		struct SBZTrafficFunctionLibrary_eventGetTrafficSplineGroundTransform_Parms
		{
			UObject* WorldContextObject;
			ASBZTrafficSpline* Spline;
			ESBZTrafficNodeType TransformType;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransformType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventGetTrafficSplineGroundTransform_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventGetTrafficSplineGroundTransform_Parms, Spline), Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::NewProp_TransformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventGetTrafficSplineGroundTransform_Parms, TransformType), Z_Construct_UEnum_Starbreeze_ESBZTrafficNodeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventGetTrafficSplineGroundTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::NewProp_TransformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::NewProp_TransformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficFunctionLibrary, nullptr, "GetTrafficSplineGroundTransform", nullptr, nullptr, sizeof(SBZTrafficFunctionLibrary_eventGetTrafficSplineGroundTransform_Parms), Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics
	{
		struct SBZTrafficFunctionLibrary_eventSetAndDriveAerialVehicleRoute_Parms
		{
			UObject* WorldContextObject;
			ASBZAerialVehicle* Vehicle;
			ASBZTrafficSpline* StartSpline;
			ASBZTrafficSpline* DestinationSpline;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartSpline;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationSpline;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSetAndDriveAerialVehicleRoute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSetAndDriveAerialVehicleRoute_Parms, Vehicle), Z_Construct_UClass_ASBZAerialVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::NewProp_StartSpline = { "StartSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSetAndDriveAerialVehicleRoute_Parms, StartSpline), Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::NewProp_DestinationSpline = { "DestinationSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSetAndDriveAerialVehicleRoute_Parms, DestinationSpline), Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZTrafficFunctionLibrary_eventSetAndDriveAerialVehicleRoute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZTrafficFunctionLibrary_eventSetAndDriveAerialVehicleRoute_Parms), &Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::NewProp_Vehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::NewProp_StartSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::NewProp_DestinationSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficFunctionLibrary, nullptr, "SetAndDriveAerialVehicleRoute", nullptr, nullptr, sizeof(SBZTrafficFunctionLibrary_eventSetAndDriveAerialVehicleRoute_Parms), Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics
	{
		struct SBZTrafficFunctionLibrary_eventSetAndDriveEscapeVanRoute_Parms
		{
			UObject* WorldContextObject;
			ASBZWheeledVehicle* NewEscapeVan;
			ASBZTrafficSpline* StartSpline;
			ASBZTrafficSpline* DestinationSpline;
			ESBZTrafficNodeExec Exec;
			FLatentActionInfo LatentInfo;
			bool bTeleportToPathStart;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewEscapeVan;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartSpline;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationSpline;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Exec_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Exec;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static void NewProp_bTeleportToPathStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleportToPathStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSetAndDriveEscapeVanRoute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_NewEscapeVan = { "NewEscapeVan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSetAndDriveEscapeVanRoute_Parms, NewEscapeVan), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_StartSpline = { "StartSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSetAndDriveEscapeVanRoute_Parms, StartSpline), Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_DestinationSpline = { "DestinationSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSetAndDriveEscapeVanRoute_Parms, DestinationSpline), Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_Exec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_Exec = { "Exec", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSetAndDriveEscapeVanRoute_Parms, Exec), Z_Construct_UEnum_Starbreeze_ESBZTrafficNodeExec, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSetAndDriveEscapeVanRoute_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_bTeleportToPathStart_SetBit(void* Obj)
	{
		((SBZTrafficFunctionLibrary_eventSetAndDriveEscapeVanRoute_Parms*)Obj)->bTeleportToPathStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_bTeleportToPathStart = { "bTeleportToPathStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZTrafficFunctionLibrary_eventSetAndDriveEscapeVanRoute_Parms), &Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_bTeleportToPathStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_NewEscapeVan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_StartSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_DestinationSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_Exec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_Exec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::NewProp_bTeleportToPathStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficFunctionLibrary, nullptr, "SetAndDriveEscapeVanRoute", nullptr, nullptr, sizeof(SBZTrafficFunctionLibrary_eventSetAndDriveEscapeVanRoute_Parms), Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVan_Statics
	{
		struct SBZTrafficFunctionLibrary_eventSetEscapeVan_Parms
		{
			UObject* WorldContextObject;
			ASBZWheeledVehicle* Vehicle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVan_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSetEscapeVan_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVan_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSetEscapeVan_Parms, Vehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVan_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVan_Statics::NewProp_Vehicle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficFunctionLibrary, nullptr, "SetEscapeVan", nullptr, nullptr, sizeof(SBZTrafficFunctionLibrary_eventSetEscapeVan_Parms), Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics
	{
		struct SBZTrafficFunctionLibrary_eventSetEscapeVanRoute_Parms
		{
			UObject* WorldContextObject;
			ASBZTrafficSpline* StartSpline;
			ASBZTrafficSpline* DestinationSpline;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartSpline;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationSpline;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSetEscapeVanRoute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::NewProp_StartSpline = { "StartSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSetEscapeVanRoute_Parms, StartSpline), Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::NewProp_DestinationSpline = { "DestinationSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSetEscapeVanRoute_Parms, DestinationSpline), Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZTrafficFunctionLibrary_eventSetEscapeVanRoute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZTrafficFunctionLibrary_eventSetEscapeVanRoute_Parms), &Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::NewProp_StartSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::NewProp_DestinationSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficFunctionLibrary, nullptr, "SetEscapeVanRoute", nullptr, nullptr, sizeof(SBZTrafficFunctionLibrary_eventSetEscapeVanRoute_Parms), Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics
	{
		struct SBZTrafficFunctionLibrary_eventSpawnAndDriveSwatVan_Parms
		{
			UObject* WorldContextObject;
			ASBZTrafficSpline* StartSpline;
			ASBZTrafficSpline* DestinationSpline;
			ESBZTrafficNodeExec Exec;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartSpline;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationSpline;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Exec_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Exec;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSpawnAndDriveSwatVan_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::NewProp_StartSpline = { "StartSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSpawnAndDriveSwatVan_Parms, StartSpline), Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::NewProp_DestinationSpline = { "DestinationSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSpawnAndDriveSwatVan_Parms, DestinationSpline), Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::NewProp_Exec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::NewProp_Exec = { "Exec", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSpawnAndDriveSwatVan_Parms, Exec), Z_Construct_UEnum_Starbreeze_ESBZTrafficNodeExec, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSpawnAndDriveSwatVan_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::NewProp_StartSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::NewProp_DestinationSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::NewProp_Exec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::NewProp_Exec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficFunctionLibrary, nullptr, "SpawnAndDriveSwatVan", nullptr, nullptr, sizeof(SBZTrafficFunctionLibrary_eventSpawnAndDriveSwatVan_Parms), Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics
	{
		struct SBZTrafficFunctionLibrary_eventSpawnEscapeVan_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<ASBZWheeledVehicle>  EscapeVanActorClass;
			FTransform SpawnTransform;
			ESBZTrafficNodeExec Exec;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EscapeVanActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Exec_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Exec;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSpawnEscapeVan_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::NewProp_EscapeVanActorClass = { "EscapeVanActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSpawnEscapeVan_Parms, EscapeVanActorClass), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSpawnEscapeVan_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::NewProp_SpawnTransform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::NewProp_Exec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::NewProp_Exec = { "Exec", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSpawnEscapeVan_Parms, Exec), Z_Construct_UEnum_Starbreeze_ESBZTrafficNodeExec, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSpawnEscapeVan_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::NewProp_EscapeVanActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::NewProp_SpawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::NewProp_Exec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::NewProp_Exec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficFunctionLibrary, nullptr, "SpawnEscapeVan", nullptr, nullptr, sizeof(SBZTrafficFunctionLibrary_eventSpawnEscapeVan_Parms), Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics
	{
		struct SBZTrafficFunctionLibrary_eventSpawnEscapeVanWithRoute_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<ASBZWheeledVehicle>  EscapeVanActorClass;
			ASBZTrafficSpline* StartSpline;
			ASBZTrafficSpline* DestinationSpline;
			ESBZTrafficNodeExec Exec;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EscapeVanActorClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartSpline;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationSpline;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Exec_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Exec;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSpawnEscapeVanWithRoute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::NewProp_EscapeVanActorClass = { "EscapeVanActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSpawnEscapeVanWithRoute_Parms, EscapeVanActorClass), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::NewProp_StartSpline = { "StartSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSpawnEscapeVanWithRoute_Parms, StartSpline), Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::NewProp_DestinationSpline = { "DestinationSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSpawnEscapeVanWithRoute_Parms, DestinationSpline), Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::NewProp_Exec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::NewProp_Exec = { "Exec", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSpawnEscapeVanWithRoute_Parms, Exec), Z_Construct_UEnum_Starbreeze_ESBZTrafficNodeExec, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficFunctionLibrary_eventSpawnEscapeVanWithRoute_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::NewProp_EscapeVanActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::NewProp_StartSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::NewProp_DestinationSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::NewProp_Exec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::NewProp_Exec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficFunctionLibrary, nullptr, "SpawnEscapeVanWithRoute", nullptr, nullptr, sizeof(SBZTrafficFunctionLibrary_eventSpawnEscapeVanWithRoute_Parms), Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZTrafficFunctionLibrary_NoRegister()
	{
		return USBZTrafficFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZTrafficFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTrafficFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZTrafficFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZTrafficFunctionLibrary_AppendEscapeVanRoute, "AppendEscapeVanRoute" }, // 533563505
		{ &Z_Construct_UFunction_USBZTrafficFunctionLibrary_DriveEscapeVan, "DriveEscapeVan" }, // 3236513590
		{ &Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetLocationAlongPathWithinAngle, "GetLocationAlongPathWithinAngle" }, // 1089161693
		{ &Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficManager, "GetTrafficManager" }, // 1210066297
		{ &Z_Construct_UFunction_USBZTrafficFunctionLibrary_GetTrafficSplineGroundTransform, "GetTrafficSplineGroundTransform" }, // 1644410122
		{ &Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveAerialVehicleRoute, "SetAndDriveAerialVehicleRoute" }, // 1688492267
		{ &Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetAndDriveEscapeVanRoute, "SetAndDriveEscapeVanRoute" }, // 2570265330
		{ &Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVan, "SetEscapeVan" }, // 857018034
		{ &Z_Construct_UFunction_USBZTrafficFunctionLibrary_SetEscapeVanRoute, "SetEscapeVanRoute" }, // 3334641850
		{ &Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnAndDriveSwatVan, "SpawnAndDriveSwatVan" }, // 4056461725
		{ &Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVan, "SpawnEscapeVan" }, // 970166076
		{ &Z_Construct_UFunction_USBZTrafficFunctionLibrary_SpawnEscapeVanWithRoute, "SpawnEscapeVanWithRoute" }, // 467482483
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTrafficFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTrafficFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTrafficFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTrafficFunctionLibrary_Statics::ClassParams = {
		&USBZTrafficFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTrafficFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTrafficFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTrafficFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTrafficFunctionLibrary, 448388764);
	template<> STARBREEZE_API UClass* StaticClass<USBZTrafficFunctionLibrary>()
	{
		return USBZTrafficFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTrafficFunctionLibrary(Z_Construct_UClass_USBZTrafficFunctionLibrary, &USBZTrafficFunctionLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTrafficFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTrafficFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
