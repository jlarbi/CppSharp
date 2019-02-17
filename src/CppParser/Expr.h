// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------

#pragma once

#include "Stmt.h"

namespace CppSharp { namespace CppParser { namespace AST {

class Expr : public Stmt
{
    enum class LValueClassification
    {
        LV_Valid = 0,
        LV_NotObjectType = 1,
        LV_IncompleteVoidType = 2,
        LV_DuplicateVectorComponents = 3,
        LV_InvalidExpression = 4,
        LV_InvalidMessageExpression = 5,
        LV_MemberFunction = 6,
        LV_SubObjCPropertySetting = 7,
        LV_ClassTemporary = 8,
        LV_ArrayTemporary = 9
    };

    enum class isModifiableLvalueResult
    {
        MLV_Valid = 0,
        MLV_NotObjectType = 1,
        MLV_IncompleteVoidType = 2,
        MLV_DuplicateVectorComponents = 3,
        MLV_InvalidExpression = 4,
        MLV_LValueCast = 5,
        MLV_IncompleteType = 6,
        MLV_ConstQualified = 7,
        MLV_ConstQualifiedField = 8,
        MLV_ConstAddrSpace = 9,
        MLV_ArrayType = 10,
        MLV_NoSetterProperty = 11,
        MLV_MemberFunction = 12,
        MLV_SubObjCPropertySetting = 13,
        MLV_InvalidMessageExpression = 14,
        MLV_ClassTemporary = 15,
        MLV_ArrayTemporary = 16
    };

    enum class SideEffectsKind
    {
        SE_NoSideEffects = 0,
        SE_AllowUndefinedBehavior = 1,
        SE_AllowSideEffects = 2
    };

    enum class ConstExprUsage
    {
        EvaluateForCodeGen = 0,
        EvaluateForMangling = 1
    };

    enum class NullPointerConstantKind
    {
        NPCK_NotNull = 0,
        NPCK_ZeroExpression = 1,
        NPCK_ZeroLiteral = 2,
        NPCK_CXX11_nullptr = 3,
        NPCK_GNUNull = 4
    };

    enum class NullPointerConstantValueDependence
    {
        NPC_NeverValueDependent = 0,
        NPC_ValueDependentIsNull = 1,
        NPC_ValueDependentIsNotNull = 2
    };

    class Classification
    {
        enum class Kinds
        {
            CL_LValue = 0,
            CL_XValue = 1,
            CL_Function = 2,
            CL_Void = 3,
            CL_AddressableVoid = 4,
            CL_DuplicateVectorComponents = 5,
            CL_MemberFunction = 6,
            CL_SubObjCPropertySetting = 7,
            CL_ClassTemporary = 8,
            CL_ArrayTemporary = 9,
            CL_ObjCMessageRValue = 10,
            CL_PRValue = 11
        };

        enum class ModifiableType
        {
            CM_Untested = 0,
            CM_Modifiable = 1,
            CM_RValue = 2,
            CM_Function = 3,
            CM_LValueCast = 4,
            CM_NoSetterProperty = 5,
            CM_ConstQualified = 6,
            CM_ConstQualifiedField = 7,
            CM_ConstAddrSpace = 8,
            CM_ArrayType = 9,
            CM_IncompleteType = 10
        };
    };

    class EvalStatus
    {
    };

    class EvalResult : public EvalStatus
    {
    };
};

class FullExpr : public Expr
{
};

class ConstantExpr : public FullExpr
{
};

class OpaqueValueExpr : public Expr
{
};

class DeclRefExpr : public Expr
{
};

class IntegerLiteral : public Expr
{
};

class FixedPointLiteral : public Expr
{
};

class CharacterLiteral : public Expr
{
    enum class CharacterKind
    {
        Ascii = 0,
        Wide = 1,
        UTF8 = 2,
        UTF16 = 3,
        UTF32 = 4
    };
};

class FloatingLiteral : public Expr
{
};

class ImaginaryLiteral : public Expr
{
};

class StringLiteral : public Expr
{
    enum class StringKind
    {
        Ascii = 0,
        Wide = 1,
        UTF8 = 2,
        UTF16 = 3,
        UTF32 = 4
    };

    typedef const SourceLocation* tokloc_iterator;
};

class PredefinedExpr : public Expr
{
    enum class IdentKind
    {
        Func = 0,
        Function = 1,
        LFunction = 2,
        FuncDName = 3,
        FuncSig = 4,
        LFuncSig = 5,
        PrettyFunction = 6,
        PrettyFunctionNoVirtual = 7
    };
};

class ParenExpr : public Expr
{
};

class UnaryOperator : public Expr
{
    typedef UnaryOperatorKind Opcode;
};

class OffsetOfExpr : public Expr
{
};

class UnaryExprOrTypeTraitExpr : public Expr
{
};

class ArraySubscriptExpr : public Expr
{
};

class CallExpr : public Expr
{
    typedef ExprIterator arg_iterator;

    typedef ConstExprIterator const_arg_iterator;

    typedef iterator_range<ExprIterator> arg_range;

    typedef iterator_range<ConstExprIterator> const_arg_range;
};

class MemberExpr : public Expr
{
};

class CompoundLiteralExpr : public Expr
{
};

class CastExpr : public Expr
{
    typedef CXXBaseSpecifier** path_iterator;

    typedef const CXXBaseSpecifier* const* path_const_iterator;
};

class ImplicitCastExpr : public CastExpr
{
    enum class OnStack_t
    {
        OnStack = 0
    };
};

class ExplicitCastExpr : public CastExpr
{
};

class CStyleCastExpr : public ExplicitCastExpr
{
};

class BinaryOperator : public Expr
{
    typedef BinaryOperatorKind Opcode;
};

class CompoundAssignOperator : public BinaryOperator
{
};

class AbstractConditionalOperator : public Expr
{
};

class ConditionalOperator : public AbstractConditionalOperator
{
};

class BinaryConditionalOperator : public AbstractConditionalOperator
{
};

class AddrLabelExpr : public Expr
{
};

class StmtExpr : public Expr
{
};

class ShuffleVectorExpr : public Expr
{
};

class ConvertVectorExpr : public Expr
{
};

class ChooseExpr : public Expr
{
};

class GNUNullExpr : public Expr
{
};

class VAArgExpr : public Expr
{
};

class InitListExpr : public Expr
{
    typedef ASTVector<Stmt*> InitExprsTy;

    typedef iterator iterator;

    typedef const_iterator const_iterator;

    typedef reverse_iterator reverse_iterator;

    typedef const_reverse_iterator const_reverse_iterator;
};

class DesignatedInitExpr : public Expr
{
    class Designator
    {
    };

    class FieldDesignator
    {
    };

    class ArrayOrRangeDesignator
    {
    };
};

class NoInitExpr : public Expr
{
};

class DesignatedInitUpdateExpr : public Expr
{
};

class ArrayInitLoopExpr : public Expr
{
};

class ArrayInitIndexExpr : public Expr
{
};

class ImplicitValueInitExpr : public Expr
{
};

class ParenListExpr : public Expr
{
};

class GenericSelectionExpr : public Expr
{
};

class ExtVectorElementExpr : public Expr
{
};

class BlockExpr : public Expr
{
};

class AsTypeExpr : public Expr
{
};

class PseudoObjectExpr : public Expr
{
    typedef Expr* const* semantics_iterator;

    typedef const Expr* const* const_semantics_iterator;
};

class AtomicExpr : public Expr
{
    enum class AtomicOp
    {
        AO__c11_atomic_init = 0,
        AO__c11_atomic_load = 1,
        AO__c11_atomic_store = 2,
        AO__c11_atomic_exchange = 3,
        AO__c11_atomic_compare_exchange_strong = 4,
        AO__c11_atomic_compare_exchange_weak = 5,
        AO__c11_atomic_fetch_add = 6,
        AO__c11_atomic_fetch_sub = 7,
        AO__c11_atomic_fetch_and = 8,
        AO__c11_atomic_fetch_or = 9,
        AO__c11_atomic_fetch_xor = 10,
        AO__atomic_load = 11,
        AO__atomic_load_n = 12,
        AO__atomic_store = 13,
        AO__atomic_store_n = 14,
        AO__atomic_exchange = 15,
        AO__atomic_exchange_n = 16,
        AO__atomic_compare_exchange = 17,
        AO__atomic_compare_exchange_n = 18,
        AO__atomic_fetch_add = 19,
        AO__atomic_fetch_sub = 20,
        AO__atomic_fetch_and = 21,
        AO__atomic_fetch_or = 22,
        AO__atomic_fetch_xor = 23,
        AO__atomic_fetch_nand = 24,
        AO__atomic_add_fetch = 25,
        AO__atomic_sub_fetch = 26,
        AO__atomic_and_fetch = 27,
        AO__atomic_or_fetch = 28,
        AO__atomic_xor_fetch = 29,
        AO__atomic_nand_fetch = 30,
        AO__opencl_atomic_init = 31,
        AO__opencl_atomic_load = 32,
        AO__opencl_atomic_store = 33,
        AO__opencl_atomic_exchange = 34,
        AO__opencl_atomic_compare_exchange_strong = 35,
        AO__opencl_atomic_compare_exchange_weak = 36,
        AO__opencl_atomic_fetch_add = 37,
        AO__opencl_atomic_fetch_sub = 38,
        AO__opencl_atomic_fetch_and = 39,
        AO__opencl_atomic_fetch_or = 40,
        AO__opencl_atomic_fetch_xor = 41,
        AO__opencl_atomic_fetch_min = 42,
        AO__opencl_atomic_fetch_max = 43,
        AO__atomic_fetch_min = 44,
        AO__atomic_fetch_max = 45,
        BI_First = 0
    };
};

class TypoExpr : public Expr
{
};

} } }