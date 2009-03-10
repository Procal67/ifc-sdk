/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCDOORSTYLE_H
#define IFC2X3_IFCDOORSTYLE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcTypeProduct.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcDoorStyle : public IfcTypeProduct {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'OperationType'.
         * 
         */
        virtual IfcDoorStyleOperationEnum getOperationType();
        /**
         * (const) Returns the value of the explicit attribute 'OperationType'.
         * 
         * @return the value of the explicit attribute 'OperationType'
         */
        virtual const IfcDoorStyleOperationEnum getOperationType() const;
        /**
         * Sets the value of the explicit attribute 'OperationType'.
         * 
         * @param value
         */
        virtual void setOperationType(IfcDoorStyleOperationEnum value);
        /**
         * Gets the value of the explicit attribute 'ConstructionType'.
         * 
         */
        virtual IfcDoorStyleConstructionEnum getConstructionType();
        /**
         * (const) Returns the value of the explicit attribute 'ConstructionType'.
         * 
         * @return the value of the explicit attribute 'ConstructionType'
         */
        virtual const IfcDoorStyleConstructionEnum getConstructionType() const;
        /**
         * Sets the value of the explicit attribute 'ConstructionType'.
         * 
         * @param value
         */
        virtual void setConstructionType(IfcDoorStyleConstructionEnum value);
        /**
         * Gets the value of the explicit attribute 'ParameterTakesPrecedence'.
         * 
         */
        virtual Step::Boolean getParameterTakesPrecedence();
        /**
         * (const) Returns the value of the explicit attribute 'ParameterTakesPrecedence'.
         * 
         * @return the value of the explicit attribute 'ParameterTakesPrecedence'
         */
        virtual const Step::Boolean getParameterTakesPrecedence() const;
        /**
         * Sets the value of the explicit attribute 'ParameterTakesPrecedence'.
         * 
         * @param value
         */
        virtual void setParameterTakesPrecedence(Step::Boolean value);
        /**
         * Gets the value of the explicit attribute 'Sizeable'.
         * 
         */
        virtual Step::Boolean getSizeable();
        /**
         * (const) Returns the value of the explicit attribute 'Sizeable'.
         * 
         * @return the value of the explicit attribute 'Sizeable'
         */
        virtual const Step::Boolean getSizeable() const;
        /**
         * Sets the value of the explicit attribute 'Sizeable'.
         * 
         * @param value
         */
        virtual void setSizeable(Step::Boolean value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDoorStyle(Step::Id id, Step::SPFData *args);
        virtual ~IfcDoorStyle();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDoorStyle &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcDoorStyleOperationEnum m_operationType;
        /**
         */
        IfcDoorStyleConstructionEnum m_constructionType;
        /**
         */
        Step::Boolean m_parameterTakesPrecedence;
        /**
         */
        Step::Boolean m_sizeable;

    };

}

#endif // IFC2X3_IFCDOORSTYLE_H
