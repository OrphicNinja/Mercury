// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLineBatchComponentFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLineBatchComponentFunctionLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_ULineBatchComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugFloatHistory();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
// End Cross Module References
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execDraw3dArrow)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_GET_STRUCT(FVector,Z_Param_LineStart);
		P_GET_STRUCT(FVector,Z_Param_LineEnd);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ArrowSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ArrowAngle);
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::Draw3dArrow(Z_Param_LineBatcher,Z_Param_LineStart,Z_Param_LineEnd,Z_Param_ArrowSize,Z_Param_ArrowAngle,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execDrawArrow)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_GET_STRUCT(FVector,Z_Param_LineStart);
		P_GET_STRUCT(FVector,Z_Param_LineEnd);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ArrowSize);
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::DrawArrow(Z_Param_LineBatcher,Z_Param_LineStart,Z_Param_LineEnd,Z_Param_ArrowSize,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execDrawBox)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::DrawBox(Z_Param_LineBatcher,Z_Param_Center,Z_Param_Extent,Z_Param_LineColor,Z_Param_Rotation,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execDrawCamera)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_GET_OBJECT(UCameraComponent,Z_Param_CameraComponent);
		P_GET_STRUCT(FLinearColor,Z_Param_CameraColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::DrawCamera(Z_Param_LineBatcher,Z_Param_CameraComponent,Z_Param_CameraColor,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execDrawCapsule)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::DrawCapsule(Z_Param_LineBatcher,Z_Param_Center,Z_Param_HalfHeight,Z_Param_Radius,Z_Param_Rotation,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execDrawCircle)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSegments);
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_STRUCT(FVector,Z_Param_YAxis);
		P_GET_STRUCT(FVector,Z_Param_ZAxis);
		P_GET_UBOOL(Z_Param_bDrawAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::DrawCircle(Z_Param_LineBatcher,Z_Param_Center,Z_Param_Radius,Z_Param_NumSegments,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness,Z_Param_YAxis,Z_Param_ZAxis,Z_Param_bDrawAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execDrawCone)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Length);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AngleWidth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AngleHeight);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSides);
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::DrawCone(Z_Param_LineBatcher,Z_Param_Origin,Z_Param_Direction,Z_Param_Length,Z_Param_AngleWidth,Z_Param_AngleHeight,Z_Param_NumSides,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execDrawCoordinateSystem)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_GET_STRUCT(FVector,Z_Param_AxisLoc);
		P_GET_STRUCT(FRotator,Z_Param_AxisRot);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::DrawCoordinateSystem(Z_Param_LineBatcher,Z_Param_AxisLoc,Z_Param_AxisRot,Z_Param_Scale,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execDrawCylinder)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_Segments);
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::DrawCylinder(Z_Param_LineBatcher,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_Segments,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execDrawDashedLine)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DashSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::DrawDashedLine(Z_Param_LineBatcher,Z_Param_Out_Start,Z_Param_Out_End,Z_Param_Out_Color,Z_Param_DashSize,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execDrawFloatHistory)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_GET_STRUCT_REF(FDebugFloatHistory,Z_Param_Out_FloatHistory);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DrawTransform);
		P_GET_STRUCT(FVector2D,Z_Param_DrawSize);
		P_GET_STRUCT(FLinearColor,Z_Param_DrawColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::DrawFloatHistory(Z_Param_LineBatcher,Z_Param_Out_FloatHistory,Z_Param_Out_DrawTransform,Z_Param_DrawSize,Z_Param_DrawColor,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execDrawFrustum)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_FrustumTransform);
		P_GET_STRUCT(FLinearColor,Z_Param_FrustumColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::DrawFrustum(Z_Param_LineBatcher,Z_Param_Out_FrustumTransform,Z_Param_FrustumColor,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execDrawLine)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_GET_STRUCT(FVector,Z_Param_LineStart);
		P_GET_STRUCT(FVector,Z_Param_LineEnd);
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::DrawLine(Z_Param_LineBatcher,Z_Param_LineStart,Z_Param_LineEnd,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execDrawPlane)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_PlaneCoordinates);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
		P_GET_STRUCT(FLinearColor,Z_Param_PlaneColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::DrawPlane(Z_Param_LineBatcher,Z_Param_Out_PlaneCoordinates,Z_Param_Location,Z_Param_Size,Z_Param_PlaneColor,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execDrawPoint)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
		P_GET_STRUCT(FLinearColor,Z_Param_PointColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::DrawPoint(Z_Param_LineBatcher,Z_Param_Position,Z_Param_Size,Z_Param_PointColor,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execDrawSphere)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_Segments);
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::DrawSphere(Z_Param_LineBatcher,Z_Param_Center,Z_Param_Radius,Z_Param_Segments,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLineBatchComponentFunctionLibrary::execFlush)
	{
		P_GET_OBJECT(ULineBatchComponent,Z_Param_LineBatcher);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLineBatchComponentFunctionLibrary::Flush(Z_Param_LineBatcher);
		P_NATIVE_END;
	}
	void USBZLineBatchComponentFunctionLibrary::StaticRegisterNativesUSBZLineBatchComponentFunctionLibrary()
	{
		UClass* Class = USBZLineBatchComponentFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Draw3dArrow", &USBZLineBatchComponentFunctionLibrary::execDraw3dArrow },
			{ "DrawArrow", &USBZLineBatchComponentFunctionLibrary::execDrawArrow },
			{ "DrawBox", &USBZLineBatchComponentFunctionLibrary::execDrawBox },
			{ "DrawCamera", &USBZLineBatchComponentFunctionLibrary::execDrawCamera },
			{ "DrawCapsule", &USBZLineBatchComponentFunctionLibrary::execDrawCapsule },
			{ "DrawCircle", &USBZLineBatchComponentFunctionLibrary::execDrawCircle },
			{ "DrawCone", &USBZLineBatchComponentFunctionLibrary::execDrawCone },
			{ "DrawCoordinateSystem", &USBZLineBatchComponentFunctionLibrary::execDrawCoordinateSystem },
			{ "DrawCylinder", &USBZLineBatchComponentFunctionLibrary::execDrawCylinder },
			{ "DrawDashedLine", &USBZLineBatchComponentFunctionLibrary::execDrawDashedLine },
			{ "DrawFloatHistory", &USBZLineBatchComponentFunctionLibrary::execDrawFloatHistory },
			{ "DrawFrustum", &USBZLineBatchComponentFunctionLibrary::execDrawFrustum },
			{ "DrawLine", &USBZLineBatchComponentFunctionLibrary::execDrawLine },
			{ "DrawPlane", &USBZLineBatchComponentFunctionLibrary::execDrawPlane },
			{ "DrawPoint", &USBZLineBatchComponentFunctionLibrary::execDrawPoint },
			{ "DrawSphere", &USBZLineBatchComponentFunctionLibrary::execDrawSphere },
			{ "Flush", &USBZLineBatchComponentFunctionLibrary::execFlush },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventDraw3dArrow_Parms
		{
			ULineBatchComponent* LineBatcher;
			FVector LineStart;
			FVector LineEnd;
			float ArrowSize;
			float ArrowAngle;
			FLinearColor LineColor;
			float Duration;
			float Thickness;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineEnd;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArrowSize;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArrowAngle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDraw3dArrow_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineStart = { "LineStart", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDraw3dArrow_Parms, LineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineEnd = { "LineEnd", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDraw3dArrow_Parms, LineEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineEnd_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_ArrowSize = { "ArrowSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDraw3dArrow_Parms, ArrowSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_ArrowAngle = { "ArrowAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDraw3dArrow_Parms, ArrowAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDraw3dArrow_Parms, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDraw3dArrow_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDraw3dArrow_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_ArrowSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_ArrowAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_LineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "Draw3dArrow", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventDraw3dArrow_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventDrawArrow_Parms
		{
			ULineBatchComponent* LineBatcher;
			FVector LineStart;
			FVector LineEnd;
			float ArrowSize;
			FLinearColor LineColor;
			float Duration;
			float Thickness;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineEnd;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArrowSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawArrow_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineStart = { "LineStart", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawArrow_Parms, LineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineEnd = { "LineEnd", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawArrow_Parms, LineEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineEnd_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_ArrowSize = { "ArrowSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawArrow_Parms, ArrowSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawArrow_Parms, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawArrow_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawArrow_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_ArrowSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_LineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "DrawArrow", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventDrawArrow_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventDrawBox_Parms
		{
			ULineBatchComponent* LineBatcher;
			FVector Center;
			FVector Extent;
			FLinearColor LineColor;
			FRotator Rotation;
			float Duration;
			float Thickness;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawBox_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_Center_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawBox_Parms, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawBox_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawBox_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawBox_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_Extent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_LineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "DrawBox", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventDrawBox_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventDrawCamera_Parms
		{
			ULineBatchComponent* LineBatcher;
			const UCameraComponent* CameraComponent;
			FLinearColor CameraColor;
			float Duration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCamera_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCamera_Parms, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::NewProp_CameraComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::NewProp_CameraColor = { "CameraColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCamera_Parms, CameraColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCamera_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::NewProp_CameraColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "DrawCamera", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventDrawCamera_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventDrawCapsule_Parms
		{
			ULineBatchComponent* LineBatcher;
			FVector Center;
			float HalfHeight;
			float Radius;
			FRotator Rotation;
			FLinearColor LineColor;
			float Duration;
			float Thickness;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCapsule_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCapsule_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_Center_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCapsule_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCapsule_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCapsule_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCapsule_Parms, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCapsule_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCapsule_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_HalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_LineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "DrawCapsule", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventDrawCapsule_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventDrawCircle_Parms
		{
			ULineBatchComponent* LineBatcher;
			FVector Center;
			float Radius;
			int32 NumSegments;
			FLinearColor LineColor;
			float Duration;
			float Thickness;
			FVector YAxis;
			FVector ZAxis;
			bool bDrawAxis;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSegments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZAxis;
		static void NewProp_bDrawAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCircle_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_LineBatcher_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCircle_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCircle_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_NumSegments = { "NumSegments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCircle_Parms, NumSegments), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCircle_Parms, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCircle_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCircle_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCircle_Parms, YAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_ZAxis = { "ZAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCircle_Parms, ZAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_bDrawAxis_SetBit(void* Obj)
	{
		((SBZLineBatchComponentFunctionLibrary_eventDrawCircle_Parms*)Obj)->bDrawAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_bDrawAxis = { "bDrawAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLineBatchComponentFunctionLibrary_eventDrawCircle_Parms), &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_bDrawAxis_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_NumSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_LineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_YAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_ZAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::NewProp_bDrawAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "DrawCircle", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventDrawCircle_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventDrawCone_Parms
		{
			ULineBatchComponent* LineBatcher;
			FVector Origin;
			FVector Direction;
			float Length;
			float AngleWidth;
			float AngleHeight;
			int32 NumSides;
			FLinearColor LineColor;
			float Duration;
			float Thickness;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleWidth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleHeight;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCone_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCone_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCone_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCone_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_AngleWidth = { "AngleWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCone_Parms, AngleWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_AngleHeight = { "AngleHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCone_Parms, AngleHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCone_Parms, NumSides), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCone_Parms, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCone_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCone_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_AngleWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_AngleHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_NumSides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_LineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "DrawCone", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventDrawCone_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventDrawCoordinateSystem_Parms
		{
			ULineBatchComponent* LineBatcher;
			FVector AxisLoc;
			FRotator AxisRot;
			float Scale;
			float Duration;
			float Thickness;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisRot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisRot;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCoordinateSystem_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_AxisLoc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_AxisLoc = { "AxisLoc", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCoordinateSystem_Parms, AxisLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_AxisLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_AxisLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_AxisRot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_AxisRot = { "AxisRot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCoordinateSystem_Parms, AxisRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_AxisRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_AxisRot_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCoordinateSystem_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCoordinateSystem_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCoordinateSystem_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_AxisLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_AxisRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "DrawCoordinateSystem", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventDrawCoordinateSystem_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventDrawCylinder_Parms
		{
			ULineBatchComponent* LineBatcher;
			FVector Start;
			FVector End;
			float Radius;
			int32 Segments;
			FLinearColor LineColor;
			float Duration;
			float Thickness;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Segments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCylinder_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCylinder_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCylinder_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_End_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCylinder_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCylinder_Parms, Segments), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCylinder_Parms, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCylinder_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawCylinder_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_Segments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_LineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "DrawCylinder", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventDrawCylinder_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventDrawDashedLine_Parms
		{
			ULineBatchComponent* LineBatcher;
			FVector Start;
			FVector End;
			FLinearColor Color;
			float DashSize;
			float Duration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashSize;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawDashedLine_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawDashedLine_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawDashedLine_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawDashedLine_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_DashSize = { "DashSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawDashedLine_Parms, DashSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawDashedLine_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_DashSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "DrawDashedLine", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventDrawDashedLine_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventDrawFloatHistory_Parms
		{
			ULineBatchComponent* LineBatcher;
			FDebugFloatHistory FloatHistory;
			FTransform DrawTransform;
			FVector2D DrawSize;
			FLinearColor DrawColor;
			float Duration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatHistory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatHistory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawFloatHistory_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_FloatHistory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_FloatHistory = { "FloatHistory", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawFloatHistory_Parms, FloatHistory), Z_Construct_UScriptStruct_FDebugFloatHistory, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_FloatHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_FloatHistory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_DrawTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_DrawTransform = { "DrawTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawFloatHistory_Parms, DrawTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_DrawTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_DrawTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_DrawSize = { "DrawSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawFloatHistory_Parms, DrawSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_DrawColor = { "DrawColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawFloatHistory_Parms, DrawColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawFloatHistory_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_FloatHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_DrawTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_DrawSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_DrawColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "DrawFloatHistory", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventDrawFloatHistory_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventDrawFrustum_Parms
		{
			ULineBatchComponent* LineBatcher;
			FTransform FrustumTransform;
			FLinearColor FrustumColor;
			float Duration;
			float Thickness;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrustumTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrustumColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawFrustum_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::NewProp_FrustumTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::NewProp_FrustumTransform = { "FrustumTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawFrustum_Parms, FrustumTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::NewProp_FrustumTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::NewProp_FrustumTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::NewProp_FrustumColor = { "FrustumColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawFrustum_Parms, FrustumColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawFrustum_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawFrustum_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::NewProp_FrustumTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::NewProp_FrustumColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "DrawFrustum", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventDrawFrustum_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventDrawLine_Parms
		{
			ULineBatchComponent* LineBatcher;
			FVector LineStart;
			FVector LineEnd;
			FLinearColor LineColor;
			float Duration;
			float Thickness;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineEnd;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawLine_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineStart = { "LineStart", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawLine_Parms, LineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineEnd = { "LineEnd", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawLine_Parms, LineEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineEnd_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawLine_Parms, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawLine_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawLine_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_LineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "DrawLine", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventDrawLine_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventDrawPlane_Parms
		{
			ULineBatchComponent* LineBatcher;
			FPlane PlaneCoordinates;
			FVector Location;
			float Size;
			FLinearColor PlaneColor;
			float Duration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneCoordinates_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneCoordinates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawPlane_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_PlaneCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_PlaneCoordinates = { "PlaneCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawPlane_Parms, PlaneCoordinates), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_PlaneCoordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_PlaneCoordinates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawPlane_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawPlane_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_PlaneColor = { "PlaneColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawPlane_Parms, PlaneColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawPlane_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_PlaneCoordinates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_PlaneColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "DrawPlane", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventDrawPlane_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventDrawPoint_Parms
		{
			ULineBatchComponent* LineBatcher;
			FVector Position;
			float Size;
			FLinearColor PointColor;
			float Duration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawPoint_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawPoint_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawPoint_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::NewProp_PointColor = { "PointColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawPoint_Parms, PointColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::NewProp_PointColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "DrawPoint", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventDrawPoint_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventDrawSphere_Parms
		{
			ULineBatchComponent* LineBatcher;
			FVector Center;
			float Radius;
			int32 Segments;
			FLinearColor LineColor;
			float Duration;
			float Thickness;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Segments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawSphere_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_Center_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawSphere_Parms, Segments), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawSphere_Parms, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawSphere_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventDrawSphere_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_Segments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_LineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "DrawSphere", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventDrawSphere_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Flush_Statics
	{
		struct SBZLineBatchComponentFunctionLibrary_eventFlush_Parms
		{
			ULineBatchComponent* LineBatcher;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Flush_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Flush_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLineBatchComponentFunctionLibrary_eventFlush_Parms, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Flush_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Flush_Statics::NewProp_LineBatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Flush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Flush_Statics::NewProp_LineBatcher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Flush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Flush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, nullptr, "Flush", nullptr, nullptr, sizeof(SBZLineBatchComponentFunctionLibrary_eventFlush_Parms), Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Flush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Flush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Flush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Flush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Flush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Flush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary_NoRegister()
	{
		return USBZLineBatchComponentFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Draw3dArrow, "Draw3dArrow" }, // 878134372
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawArrow, "DrawArrow" }, // 3855743475
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawBox, "DrawBox" }, // 4283593035
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCamera, "DrawCamera" }, // 527443534
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCapsule, "DrawCapsule" }, // 4097321144
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCircle, "DrawCircle" }, // 660515824
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCone, "DrawCone" }, // 1310243546
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCoordinateSystem, "DrawCoordinateSystem" }, // 2711403601
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawCylinder, "DrawCylinder" }, // 1476867066
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawDashedLine, "DrawDashedLine" }, // 1875486358
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFloatHistory, "DrawFloatHistory" }, // 1431964193
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawFrustum, "DrawFrustum" }, // 1422613136
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawLine, "DrawLine" }, // 3999646070
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPlane, "DrawPlane" }, // 1953750021
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawPoint, "DrawPoint" }, // 462989104
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_DrawSphere, "DrawSphere" }, // 825260305
		{ &Z_Construct_UFunction_USBZLineBatchComponentFunctionLibrary_Flush, "Flush" }, // 2125225404
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLineBatchComponentFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLineBatchComponentFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLineBatchComponentFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary_Statics::ClassParams = {
		&USBZLineBatchComponentFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLineBatchComponentFunctionLibrary, 1159209369);
	template<> STARBREEZE_API UClass* StaticClass<USBZLineBatchComponentFunctionLibrary>()
	{
		return USBZLineBatchComponentFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLineBatchComponentFunctionLibrary(Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary, &USBZLineBatchComponentFunctionLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLineBatchComponentFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLineBatchComponentFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
